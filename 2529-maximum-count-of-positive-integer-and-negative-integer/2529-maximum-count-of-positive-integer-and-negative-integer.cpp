class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int m=nums.size();        
        int pos=0;
        int neg=0;
        for(int i=0;i<m;i++){           
                if(nums[i]==0){
                    continue;
                }
                else if(nums[i]>0){
                    pos++;
                }
                else{
                    neg++;
                }           
        }
        return max(pos,neg);
        
    }
};