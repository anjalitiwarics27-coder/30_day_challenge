#include <iostream>
using namespace std;

int main() {
    int numbers[] = {2, 7, 11, 15};
    int n = 4;
    int low = 0;
    int high = n - 1;
    int target = 9;

    while (low < high) {
        if (numbers[low] + numbers[high] == target) {
            cout << "Indices: " << low + 1 << " " << high + 1 << endl;
            return 0;
        }
        else if (numbers[low] + numbers[high] > target) {
            high--;
        }
        else {
            low++;
        }
    }

    cout << "No pair found" << endl;
    return 0;
}