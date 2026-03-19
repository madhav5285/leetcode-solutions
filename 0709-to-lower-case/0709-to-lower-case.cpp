class Solution {
public:
    string toLowerCase(string s) {
        string sr="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                sr.push_back(s[i]-'A'+'a');
            }else{
                sr.push_back(s[i]);
            }

        }
     return sr;   
    }
};