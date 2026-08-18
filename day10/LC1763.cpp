class Solution {
public:
    string longestNiceSubstring(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                string sub = s.substr(i, j - i + 1);

                bool nice = true;

                for (char c : sub) {

                    if (isupper(c)) {
                        char lower = tolower(c);

                        if (sub.find(lower) == string::npos) {
                            nice = false;
                            break;
                        }
                    }

                    if (islower(c)) {
                        char upper = toupper(c);

                        if (sub.find(upper) == string::npos) {
                            nice = false;
                            break;
                        }
                    }
                }

                if (nice && sub.size() > ans.size()) {
                    ans = sub;
                }
            }
        }

        return ans;
    }
};