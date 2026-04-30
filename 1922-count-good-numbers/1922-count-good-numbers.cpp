class Solution {
public:
    static const long long md=1000000007;
long long power(long long base,long long exp){
            long long  result=1;
            base=base%md;
            while(exp>0){
                if(exp &1){
                    result=(result*base)%md;
                }
                base=(base*base)%md;
                exp>>=1;
            }
            return result;
        }
    int countGoodNumbers(long long n) {
        
        
        long long evencount=(n+1)/2;
        long long oddcount=n/2;
        long long evenway=power(5,evencount);
        long long oddway=power(4,oddcount);
     return (evenway*oddway)%md;
        
    }
};