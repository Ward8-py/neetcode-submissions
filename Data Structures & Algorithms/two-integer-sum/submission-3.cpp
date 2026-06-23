class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i=0; i<nums.size();i++){
            seen[nums[i]]=i;
        }
        for(int i=0; i<nums.size();i++){
            int needed=target-nums[i];
            if(seen.find(needed)!=seen.end()){
                if(seen[needed]!=i){
                return {i,seen[needed]};}
            }
        }
    }
};
