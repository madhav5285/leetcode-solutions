class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int d=1;
        int temp=n;
        while(temp>0){
            int ld=temp%10;
            s+=ld;
            d*=ld;
            temp=temp/10;
        } 
        int a=d+s;
        if(n%a==0){
            return true;
        }else{
            return false;
        }
    }
};