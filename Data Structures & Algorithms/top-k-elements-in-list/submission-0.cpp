class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> answer;
       // int unique=0;
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<nums.size();i++){
            // if(um.find(nums[i])!=um.end()){
            //     unique++;
            //     }
            um[nums[i]]++;
        }

        for(auto p : um){
            pq.push({p.second,p.first});
        }
        for(int i=0;i<k;i++){
           auto temp= pq.top();
           answer.push_back(temp.second);
            pq.pop();
        }
        return answer;
    }
};
