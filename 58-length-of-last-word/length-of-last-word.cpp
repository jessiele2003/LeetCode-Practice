class Solution {
public:
    int lengthOfLastWord(string s) {
        //traverse from right to left <-
        int current;
        int result = 0;
        for(current = s.size() -1; current >= 0; --current) {
            if(s[current] == ' ' && result == 0) {
                continue;
            }
            else if(s[current] == ' ') {
                return result;
            }
            else
                ++result;
        }
        return result;
    }
};