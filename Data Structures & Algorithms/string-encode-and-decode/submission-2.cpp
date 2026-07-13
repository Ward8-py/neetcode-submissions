class Solution {
public:

    string encode(vector<string>& strs) {
       string encoded_string="";
       for(int i=0; i<strs.size();i++){
        int integer_strlength=strs[i].length();
        string str_strlength=to_string(integer_strlength);
        encoded_string+=str_strlength;
        encoded_string+="#";
        encoded_string+=strs[i];
       }
       return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;

            int i=0;
            
            // while(i<s.length()){
                
            //     if(s[i]>='0'&&s[i]<='9'){
            //         string strlen
            //     }

            //     char lengthchar=s[i];
            //     string stringlength(1,lengthchar);
            //     int intleng=stoi(stringlength);
            //     string word= s.substr(i+2,intleng);
            //     decoded_strs.push_back(word);
            //     i=i+intleng+2;
            // }


           while(i<s.length()){
            string strlength="";
            while(s[i]>='0' && s[i]<='9'){
                strlength+=s[i];
                i++;
            }
            int length=stoi(strlength);
            if(s[i]=='#'){
               string word= s.substr(i+1,length);
               decoded_strs.push_back(word);
               i=i+length+1;
            }


           }
            return decoded_strs;
            

    }
};
