class Solution {
public:
    bool isPalindrome(int x) {
        // check if negative number
        if(x < 0)
            return false;
        
        // if x is 10, 100, 200, 30000
        if(x != 0 && x % 10 == 0)
            return false;
        
        int reverse = 0;
        while (x > reverse) {
            reverse = reverse * 10 + x % 10;
            x = x/10;
        }
        if( x == reverse)
            return true;

        //odd case where 525, reverse = 52, x =5 
        if(x == reverse / 10)
            return true;
        return false;
    }
};