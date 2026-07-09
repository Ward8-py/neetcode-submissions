class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> ans;
        for(int i=0; i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto p:freq){
            bucket[p.second].push_back(p.first);
        }

        for (int i = bucket.size() - 1; i >= 0; i--) {
            if(ans.size()==k){break;}
            for(int num :bucket[i]){
                ans.push_back(num);
            }
            
           
    }
      return ans;     
    }
};
