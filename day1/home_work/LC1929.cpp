// concatenation of array 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr1[1000];
    int arr2[2000];

    // Input array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Concatenate the array
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
        arr2[i + n] = arr1[i];
    }

    // Print the new array
    cout << "Concatenated Array: ";
    for (int i = 0; i < 2 * n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}