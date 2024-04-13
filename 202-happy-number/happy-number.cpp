class Solution {
public:
    bool isHappy(int n) {
        while(n != 1 && n != 4)
        {
            int square = 0;
            while(n > 0)
            {
                int num = n % 10;
                square += num *num;
                n = n/10;
            }
            n = square;
        }
        return n == 1;
    }
};