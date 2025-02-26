class Solution {
public:
    bool hasSameDigits(string s) {
        //3902
        //ij       (3 + 9) % 10 = 2
        // ij       (9 + 0) % 10 = 9
        //  ij      (0 + 2) % 10 = 2
        if(s.length() < 2)
            return false;
        while(s.length() >= 2) {
            string num;
            //cout << "Length: " << s.length() << endl;
            if(s.length() == 2 && s[0] == s[1]) {
                return true;
            } 
            else {
                for(int i = 0; i < s.size() -1 ; ++i) {
                    int j = i +1;
        
                    char result = ((s[i] - '0' + s[j] - '0') % 10) + '0';
                    
                    //cout << "S[i]: " << s[i] << "Index i" << i <<endl;
                    //cout << "S[j]: " << s[j] << "Index j" << j<<endl;
                    //cout << "Result: " << result << endl;
                    
                    num.push_back(result);
                    //cout << num << endl;
                }
            }
            s = num;
        }
        return false;
    }
};