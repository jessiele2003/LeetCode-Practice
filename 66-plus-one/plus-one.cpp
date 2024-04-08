class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int size = digits.size();
        for (int i = size - 1; i >= 0; --i) {
            digits[i]++;  //plus one for last digit
            
            // if digits number after add smaller than 10, no need to do carry
            if (digits[i] < 10)
                return digits;   
            // If there's a carry, set the current digit to 0
            digits[i] = 0;
        }
        // Insert a new digit 1 at the beginning for carrying
        digits.insert(digits.begin(), 1);
        return digits;
    }
};