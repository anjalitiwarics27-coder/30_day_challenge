#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&nums){
    for(int elem :nums) cout<<elem<<" ";
}
int main(){
    vector<int>nums={3,8,1,5,2};
    int n =nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-2;j++){
            if (nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    print(nums);
    return 0;
}