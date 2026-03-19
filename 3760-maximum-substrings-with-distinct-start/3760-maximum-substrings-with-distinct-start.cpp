class Solution {
public:
    int maxDistinct(string s) {
        vector<bool>seen(26, false);
        for (char ch : s) {
            seen[ch-'a']=true;
        }
        int cnt=0;
        for (bool x:seen) {
            if(x)cnt++;
        }
        return cnt;
    }
};