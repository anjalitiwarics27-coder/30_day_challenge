#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(nums) / sizeof(nums[0]);

    // Sort the array
    sort(nums, nums + n);

    for (int i = 0; i < n - 2; i++) {

        // Skip duplicates
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                cout << nums[i] << " "
                     << nums[left] << " "
                     << nums[right] << endl;

                left++;
                right--;

                // Skip duplicates
                while (left < right && nums[left] == nums[left - 1])
                    left++;

                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return 0;
}


//      algorithm 
//     sort array (pointer)
//     for(i=0->n)
//     j=i+1,k=n-1
// while(j<k)
// sum=num[i]+num[j]+num[k]
// if(sum==0)
// add triplet
// sum>0
// k--
// else j++
// while
// while
   