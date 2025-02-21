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
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] != a[i])
                return false;
        }
        cout << a << endl;
        cout << s << endl;
        return true;
    }
};