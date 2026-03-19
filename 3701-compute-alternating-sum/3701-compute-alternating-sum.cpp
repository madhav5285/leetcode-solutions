class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int eve=0;
        int od=0;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i%2==0){
                eve+=nums[i];
            }
            if(i%2!=0){
                od+=nums[i];
            }
            
        }
        int dif=eve-od;
        return dif;
    }
};