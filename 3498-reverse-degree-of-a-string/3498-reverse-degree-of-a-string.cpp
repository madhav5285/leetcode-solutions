class Solution {
public:
    int reverseDegree(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            cnt+=(i+1)*(26-(s[i]-'a'));
        }
        return cnt;
        
    }
};