#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 3, 5, 6, 0};
    int n = 6;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    if (count <= 1) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}