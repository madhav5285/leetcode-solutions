class Solution {
public:
    int differenceOfSums(int n, int m) {
        int dsum=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                dsum+=i;
            }
            if(i%m==0){
                sum+=i;
            }
        }
       return dsum-sum;
        
    }
};