class Solution {
public:
    bool isAnagram(string s, string t) {
       //store 2 strings into 2 hashmaps
       unordered_map<char, int> uniqueS;
       unordered_map<char, int> uniqueT;

       //check length of 2 strings
       if(s.size() != t.size())
            return false;
        
        //store the letters into the hash tables
        for(int i = 0; i < s.size(); ++i) {
            uniqueS[s[i]]++;
            uniqueT[t[i]]++;
        }

        for(int i = 0; i < uniqueS.size(); ++i) {
            if(uniqueS[i] != uniqueT[i])
                return false;
        }
        return true;
    }
};