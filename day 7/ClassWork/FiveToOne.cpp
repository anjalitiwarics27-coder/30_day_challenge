#include <iostream>
using namespace std;

void Digit(int n) {
    if (n < 1) {
        return;
    }

    cout << n << " ";
    Digit(n - 1);
}

int main() {
    int n = 5;
    Digit(n);

    return 0;
}