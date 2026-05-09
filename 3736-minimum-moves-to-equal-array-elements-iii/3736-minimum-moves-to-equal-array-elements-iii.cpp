class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=0;
        for(int i=0;i<nums.size();i++){
            mx=max(nums[i],mx);
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=(mx-nums[i]);
        }
        return cnt;
        
    }
};