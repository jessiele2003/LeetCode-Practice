class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(const auto& d : details)
        {
            int tenth = d[11] - '0';
            int one = d[12] - '0';
            int age = one + tenth*10;
            if (age > 60)
                count += 1;
        }
        return count;
    }
};