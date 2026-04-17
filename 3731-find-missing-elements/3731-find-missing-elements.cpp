class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int miin=nums[0];
        int maax=nums[n-1];
        vector<int>ans;
        for(int i=miin;i<=maax;i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
       return ans; 
    }
};
        