class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int>> pq;
        unordered_map <int,int> mp;
        vector<int> answer;

        for(int i=0; i< nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& j:mp){
            pq.push({j.second,j.first});
        }
        for(int i=0; i<k;i++){
            answer.push_back(pq.top().second);
            pq.pop();
        }

        return answer;
    }
};
