#include <iostream>
#include <string>
using namespace std;

void Reverse(string &s, int l, int r) {
    if (l >= r)
        return;

    swap(s[l], s[r]);

    Reverse(s, l + 1, r - 1);
}

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    Reverse(s, 0, s.length() - 1);

    cout << "Reversed string: " << s << endl;

    return 0;
}