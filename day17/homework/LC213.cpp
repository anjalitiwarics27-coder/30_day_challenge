class Solution {
public:
    int rob(vector<int>& nums) {
        int n =nums.size();
        if(n==1) return nums[0];
        // helper function to solve linear house robber for a given range 
        auto robLinear=[&](int start , int end ){
            int prev1 =0;
            int prev2=0;
            for(int i=start;i<=end;++i){
                int temp= max(prev1,prev2+nums[i]);
                prev2=prev1;
                prev1=temp;
            }
            return prev1;
        };
        return max(robLinear(0,n-2),robLinear(1,n-1));
        
    }
};