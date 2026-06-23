class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        unordered_map<string, string>map;
        if(s.length()!=t.length()){return false; }
        bool flag=true;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=t[i]){
                flag= false;
            }
        }
        if(flag==true){return true;}
        else{return false;}

    }
};
