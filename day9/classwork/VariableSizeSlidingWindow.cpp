#include<iostream>
using namespace std;
int main(){
    int vector<int> nums={2,3,1,5,2,3};
    int left =0;
    int sum =0;
    int target=7;
    int ans =INT_MAX;
    for(int right =0;right<nums.size();right++){
        sum+=nums[right];
        while(sum>=target){
            ans=min(ans,right-left+1);
            sum -= nums[left];
            left++;
        }
    }
    cout<<ans;
}