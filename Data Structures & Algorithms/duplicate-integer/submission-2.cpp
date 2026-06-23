class Solution {
public:
    
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> um;
       bool flag=false;
       for(int i=0;i<nums.size();i++){
        um[nums[i]]++;
       }
       for(auto t:um){
        if(t.second>1){
            flag=true;
            break;
        }
       }
       if(flag==true){return true;}
       else{return false;}
    }
};