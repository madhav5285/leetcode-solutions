class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int cnt=0;
        
        for(int i=0;i<s.size();i++){
            int zr=0;
            int on=0;
             for(int j=i;j<s.size();j++){
                if(s[j]=='0') zr++;
                else on++;
            
            if(zr<=k||on<=k) cnt++;
            else{
                break;
            }
             }
        }
        return cnt;
        
    }
};