class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;   //left most the string
        int r = s.size() -1;    //right most the string


        //check to make sure the left never pass the right
        while (l < r) {
            while (l < r && !isalnum(s[l]))    //if the left is not alphabetical, then increase 1
            {
                ++l;
            }
            while (l < r && !isalnum(s[r])) //if the right is not alphabetical, then decrease the index => go backward
            {
                --r;
            }
            if(tolower(s[l]) != tolower(s[r])) {    //if the current pair not match
                return false;
            }
            ++l;    //keep going until the end of the loop
            --r;
        }
        return true;
    }
};