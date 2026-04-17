class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(101,0);
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int maax=0;
        for(int i=0;i<ans.size();i++){
            maax=max(ans[i],maax);
        }
        int cnt=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==maax) cnt++;
        }
        return cnt*maax;
        
    }
};