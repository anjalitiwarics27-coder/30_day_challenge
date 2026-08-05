// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int nums[]={-2,1,-3,4,-1,2,1,-5,4};
//     int n=9;
//     int maxi=nums[0];
//     for(int i=0;i<n;i++){
//         int sum=0 ;
//         for(int j=i;j<n;j++){
//             sum += nums[j];
//             maxi=max(maxi,sum);
//         }
//     }
//     cout<<"Maximum Subarray Sum = "<<maxi;
//     return 0;
// }

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            maxi = max(maxi, sum);

            if (sum < 0)
                sum = 0;
        }

        return maxi;
    }
};