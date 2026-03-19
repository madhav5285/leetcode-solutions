class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=mp.size();
        return ans;
    }
};