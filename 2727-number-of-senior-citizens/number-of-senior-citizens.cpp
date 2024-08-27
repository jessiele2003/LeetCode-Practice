class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(const auto& d : details)
        {
            //convert string to interger using Ascii values
            int tenth = d[11] - '0';
            int one = d[12] - '0';
            int age = one + tenth*10;   //tenth * 10 because example we want 40 so 4 * 10
            if (age > 60)
                count += 1;
        }
        return count;
    }
};