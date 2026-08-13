#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // 1. Create
    unordered_map<int, int> mp;


    // 2. Insert
    mp[1] = 100;
    mp[2] = 200;
    mp[3] = 300;


    // 3. Get
    cout << mp[2] << endl;


    // 4. Get with Default
    // Agar key exist nahi karti, to default value use kar sakte hain
    if (mp.find(5) != mp.end())
        cout << mp[5] << endl;
    else
        cout << 0 << endl;


    // 5. Exists / Check key
    if (mp.find(2) != mp.end())
        cout << "Key exists" << endl;
    else
        cout << "Key does not exist" << endl;


    // 6. Remove
    mp.erase(2);


    // 7. Size
    cout << "Size = " << mp.size() << endl;


    // 8. Keys
    cout << "Keys: ";
    for (auto &p : mp) {
        cout << p.first << " ";
    }
    cout << endl;


    // 9. Values
    cout << "Values: ";
    for (auto &p : mp) {
        cout << p.second << " ";
    }
    cout << endl;


    // 10. Entries (Key + Value)
    cout << "Entries: " << endl;
    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }


    // 11. Clear
    mp.clear();


    // Check size after clear
    cout << "Size after clear = " << mp.size() << endl;

    return 0;
}