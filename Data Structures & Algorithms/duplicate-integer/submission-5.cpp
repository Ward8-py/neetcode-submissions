class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> mp;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& j:mp){
            if(j.second>1){
                return true;
            }
        }
         return false;
    }
};