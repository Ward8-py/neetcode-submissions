class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        sort(nums.begin(),nums.end());
        int current = nums[0];
        int count=1;
        vector <int> counts;
        
        for(int i=1; i<nums.size();i++){
            if(nums[i]==current+1){
                count++;
                current=nums[i];
            }
            if(nums[i]==current){
                continue;
            }
            else {
                
                counts.push_back(count);
                count=1;
                current=nums[i];
            }

        }
        counts.push_back(count);
        if(counts.size()==0){return 0;}
        int max=counts[0];
        for(int i=0; i<counts.size();i++){
            if(max<counts[i]){
                max=counts[i];
            }
        }
        return max;

    }
};
