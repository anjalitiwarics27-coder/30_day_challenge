class Solution {
public:
    string decodeAtIndex(string s, int k) {
          long long size = 0;

        // Calculate decoded string length
        for (char c : s) {
            if (isdigit(c)) {
                size *= (c - '0');
            } else {
                size++;
            }
        }

        // Traverse backwards
        for (int i = s.length() - 1; i >= 0; i--) {

            if (isdigit(s[i])) {

                size /= (s[i] - '0');

            } else {

                // This is the important condition
                if (k % size == 0) {
                    return string(1, s[i]);
                }

                k = k % size;
                size--;
            }
        }

        return "";
        
    }
};