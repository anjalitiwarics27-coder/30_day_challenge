class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        // frequency count 
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        // first character whose frequency is one 
            for(int i=0;i<s.size();i++){
                if(mp[s[i]]==1){
                    return i;
                }
            }
               return -1;
    }
};