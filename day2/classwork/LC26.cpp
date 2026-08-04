#include <iostream>
using namespace std;

int main() {

    int nums[] = {1,1,2,2,3,3};
    int n = 6;

    int i = 1;
    int prev = nums[0];

    for (int j = 1; j < n; j++) {

        if (nums[j] != prev) {
            nums[i] = nums[j];
            prev = nums[j];
            i++;
        }
    }

    cout << "Number of unique elements = " << i << endl;

    cout << "Array after removing duplicates: ";

    for (int k = 0; k < i; k++) {
        cout << nums[k] << " ";
    }

    return 0;
}