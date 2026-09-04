class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int minel=INT_MAX,maxel=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            maxel=*max_element(nums.begin(),nums.begin()+i+1);
            minel=*min_element(nums.begin()+i,nums.end());
            int ins=maxel-minel;
            if(ins<=k)
                return i;
        }
      
            return -1;    
    }
};