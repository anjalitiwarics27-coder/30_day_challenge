// maximum 3 number in the arrays 
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int nums[] = {3, 6, 9, 9, 2, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    int first_max = INT_MIN;
    int sec_max = INT_MIN;
    int third_max = INT_MIN;

    for (int i = 0; i < n; i++) {

        int num = nums[i];

        // Duplicate numbers skip karo
        if (num == first_max || num == sec_max || num == third_max)
            continue;

        if (num > first_max) {
            third_max = sec_max;
            sec_max = first_max;
            first_max = num;
        }
        else if (num > sec_max) {
            third_max = sec_max;
            sec_max = num;
        }
        else if (num > third_max) {
            third_max = num;
        }
    }

    cout << "First Maximum  = " << first_max << endl;
    cout << "Second Maximum = " << sec_max << endl;
    cout << "Third Maximum  = " << third_max << endl;

    return 0;
}