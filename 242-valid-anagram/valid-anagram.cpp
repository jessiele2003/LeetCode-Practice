class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Check the 2 strings length -> if not, then definitely not anagrams
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, int> uniqueS;
        unordered_map<char, int> uniqueT;
        // 2. Loop through and insert two strings into two hash tables
        for(int i = 0; i < s.size(); ++i) {
            uniqueS[s[i]]++;
            uniqueT[t[i]]++;
        }

        // 3. Loop to count the unique characters
        for(int i = 0; i < uniqueS.size(); ++i) {
            if(uniqueS[i] != uniqueT[i])
                return false;
        }
        return true;
    }
};