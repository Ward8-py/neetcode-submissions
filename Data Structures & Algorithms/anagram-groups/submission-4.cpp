class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mp;
        vector<vector<string>> answer;
       for(int i=0; i<strs.size();i++){
        string sorted=strs[i];
            sort(sorted.begin(),sorted.end());
           mp[sorted].push_back(strs[i]);
        }
        for(auto &j : mp){
            answer.push_back(j.second);
        }
        return answer;
    }
};
