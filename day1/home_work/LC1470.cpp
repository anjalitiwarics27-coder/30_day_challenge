#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int nums[100];
    int ans[200];

    cout << "Enter " << 2 * n << " elements: ";
    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    int index = 0;

    // Shuffle the array
    for (int i = 0; i < n; i++) {
        ans[index] = nums[i];
        index++;

        ans[index] = nums[i + n];
        index++;
    }

    cout << "Shuffled Array: ";
    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}