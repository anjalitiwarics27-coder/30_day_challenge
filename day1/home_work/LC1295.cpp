// find numbers with number of digits 

#include<iostream>
using namespace std;

int main() {
    int elem;
    cout << "Enter the number of elements: ";
    cin >> elem;

    int arr[50];
    int even_count = 0;
    int odd_count = 0;

    // Input array
    for (int i = 0; i < elem; i++) {
        cin >> arr[i];
    }

    // Check each element
    for (int i = 0; i < elem; i++) {

        int num = arr[i];
        int count = 0;

        while (num > 0) {
            count++;
            num /= 10;
        }

        if (count % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "Even count = " << even_count << endl;
    cout << "Odd count = " << odd_count << endl;

    return 0;
}