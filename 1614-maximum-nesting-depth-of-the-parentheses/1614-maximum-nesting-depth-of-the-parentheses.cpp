class Solution {
public:
    int maxDepth(string s) {
        int b=0;
        int n=s.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,b);
            if(s[i]=='('){
                b++;
            }else if(s[i]==')'){
                b--;
            }
        }
        return mx;
        
    }
};