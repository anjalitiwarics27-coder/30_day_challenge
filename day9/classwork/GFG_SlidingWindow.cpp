class Solution {
  public:
    int maxSubarraySum(vector<int>& nums, int k) {
        // code here
        int left =0;
        int windowSum=0;
        int ans =INT_MIN;
        for (int right =0;right<nums.size();right++){
            windowSum+=nums[right];
            if(right-left+1==k){
                ans =max(ans,windowSum);
                windowSum -=nums[left];
                left++;
            }
        }
        return ans;
        
    }
};