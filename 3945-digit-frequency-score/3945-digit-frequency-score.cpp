class Solution {
public:
    int digitFrequencyScore(int n) {
    map<int,int>mp;
        int d=n;
        while(d>0){
            int ld=d%10;
            mp[ld]++;
            d=d/10;
        }
        int sum=0;
        int k=n;
        while(k>0){
            int l=k%10;
            sum+=(l*mp[l]);
            mp.erase(l);
            k=k/10;

        }
        return sum;
        
    }
};