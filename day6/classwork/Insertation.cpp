#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& nums){
    for(int elem : nums)
        cout << elem << " ";
}

int main(){
    vector<int> nums = {3, 8, 1, 5, 2};
    int n = nums.size();

    for(int i = 1; i < n ; i++){

        int key = nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j=j-1;
        }
        nums[j+1]=key;

    }

    print(nums);

    return 0;
}