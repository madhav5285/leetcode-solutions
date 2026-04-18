class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int dup=n;
        int lt=0;
        while(n>0){
            lt=n%10;
            rev=rev*10+lt;
            n=n/10;
        }
      return abs(dup-rev);
        
    }
};