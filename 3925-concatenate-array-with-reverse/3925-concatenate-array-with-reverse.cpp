class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(2*n);
        int k=0;
        for(int i=0;i<n;i++){
            arr[k]=nums[i];
            k++;
        }
        for(int i=n-1;i>=0;i--){
            arr[k]=nums[i];
            k++;
        }
        return arr;
    }
};