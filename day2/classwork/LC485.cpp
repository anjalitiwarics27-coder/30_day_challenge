#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1,1,0,1,1,1};
    int n = 6;

    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount;

    return 0;
}