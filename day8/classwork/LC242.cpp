class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size())
            return false;

        unordered_map<char, int> mp;

        // s ke characters count karo
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // t ke characters ki frequency kam karo
        for(int i = 0; i < t.size(); i++) {
            mp[t[i]]--;

            if(mp[t[i]] < 0)
                return false;
        }

        return true;

        
    }
};