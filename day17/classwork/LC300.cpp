class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>sub;
        for(int num:nums){
            // find the iterator of the first element> =nums
            auto it=lower_bound(sub.begin(),sub.end(),num);
            if(it==sub.end()){
                // if num is greater than all elements , append it
                sub.push_back(num);
            }
            else{
                //otherwise , replace the first element>=num
                *it=num;
            }

        }
        return sub.size();
    }
};