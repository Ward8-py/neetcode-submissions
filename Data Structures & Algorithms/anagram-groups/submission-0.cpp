class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> table;
        if(strs.empty()){
            return {};
        }
        
        
        for(int i=0; i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            table[key].push_back(strs[i]);

        }

        for(auto &j:table){
            answer.push_back(j.second);
        }
        return answer;




    }
};
