class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> mp;
        vector<vector<string>> answer;
        for(int i=0;i<strs.size();i++){
          // sort(strs[i].begin(),strs[i].end());
           string key=strs[i];
           sort(key.begin(),key.end());
           mp[key].push_back(strs[i]);
        }
        
        for(auto &j : mp){
            answer.push_back(j.second);
        }
        return answer;
    }
};
