class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (auto& ch : s){
            if(isalnum(ch)) t+= tolower(ch);
        }
        swap(s,t);
        string a = s;
        reverse(s.begin(), s.end());
        return a == s;
        cout << s << endl;
        return false;
    }
};