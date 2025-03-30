class Solution {
public:
    int longestPalindrome(string s, string t) {
        int m = s.size();
        int n = t.size();
        int res = 0;
        for(int i = 0; i < m; ++ i) {
            for(int j = i; j < m; ++j) {
                for(int a = 0; a < n; ++a) {
                    for(int b = a; b < n; ++b) {
                        string sub_s = s.substr(i, j - i + 1);
                        string rev_subs = sub_s;
                        reverse(begin(rev_subs), end(rev_subs));
                        if(sub_s == rev_subs) {
                            res = max(res, int(rev_subs.size()));
                        }       
                        string sub_t = t.substr(a, b - a + 1);
                        string rev_subt = sub_t;
                        reverse(begin(rev_subt), end(rev_subt));
                        if(sub_t == rev_subt) {
                            res = max(res, int(rev_subt.size()));
                        }
                        string concatnate = sub_s + sub_t;
                        string rev_concatnate = concatnate;
                        reverse(begin(rev_concatnate), end(rev_concatnate));
                        if(concatnate == rev_concatnate) {
                            res = max(res, int(concatnate.size()));
                        }
                    }
                }
            }
        }
        return res;
    }
};