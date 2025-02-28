class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s += ' ';
        string t;
        vector<string> a;
        int m = s.size();
        for(int j = 0; j < m; ++j) {
            if(s[j] != ' ') {
                t += s[j];
            }
            else {
                a.push_back(t);
                t ="";
            }
        }
        int n = pattern.size();
        unordered_map<char, string> mp;
        unordered_map<string, char> mp1;
        cout << pattern << endl;
        if(n != a.size())
            return false;
        for(int i = 0; i < n; ++i) {
            cout << pattern[i] << endl;
            if(!mp.count(pattern[i])) {
                mp[pattern[i]] = a[i];
            }
            else {
                if(mp[pattern[i]] == a[i]) {
                    continue;
                }
                return false;
            }

        }
        for(int g = 0; g < a.size(); ++g) {
            if(!mp1.count(a[g])) {
                mp1[a[g]] = pattern[g];
            }
            else {
                if(mp1[a[g]] == pattern[g]) {
                    continue;
                }
                return false;
            }          
        }
        return true;
    }
};