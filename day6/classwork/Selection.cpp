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

    for(int i = 0; i < n - 1; i++){

        int mini = i;

        for(int j = i + 1; j < n; j++){

            if(nums[j] < nums[mini]){
                mini = j;
            }
        }

        swap(nums[i], nums[mini]);
    }

    print(nums);

    return 0;
}