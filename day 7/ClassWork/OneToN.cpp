#include <iostream>
using namespace std;

void Digit(int n) {
    if (n < 1) {
        return;
    }

    Digit(n - 1);
    cout << n << " ";
}

int main() {
    int n ;
    cout<<"Enter the digit :";
    cin>>n;
    Digit(n);

    return 0;
}