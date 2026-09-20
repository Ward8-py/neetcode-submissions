class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(int i=0; i<strs.size();i++){
           int length=strs[i].length();
           encoded+=to_string(length);
            encoded+='#';
            encoded+=strs[i];
        }
        
        return encoded;
    }
    
       // 5#hello5#world
    vector<string> decode(string s) {
        vector<string> decoded;
        int length=s.length();
        
       for(int i=0; i<length;i++){
          string number="";
          while(s[i]!='#'){
            number+=s[i];
            i++;
          }
          int jump=stoi(number);
          decoded.push_back(s.substr(i+1,jump));
          i+=jump;


       }
        return decoded;
    }
};
