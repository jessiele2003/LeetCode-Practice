class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        long mid;
        while(low <= high) {

            long sqrt;
            mid = ((high - low) / 2) +low;
            sqrt = mid * mid;

            if(sqrt == x)
                return mid;

            if(sqrt > x) {
                high = mid -1;
            }
            else
                low = mid +1;

        }
        return high;
    }
};


/*
1    2     3    4   5   6   7   8
mid= 8-1/2 + 1 = 4        sqrt = 16
high = 7   mid = 7 -1 /2 + 1 = 4   sqrt = 16
high = 6    mid = 6-1/2 +1 = 3   sqrt = 9
h = 5     mid = 5-1/2+1 = 3    sqrt = 9
h = 4    mid = 4-1/2 +1 = 2  sqrt = 4
l = 3   mid = 4-3/2 +3 = 3    sqrt = 9
h = 3   mid = 3-3/2+3  = 3  sqrt = 9
h =2    out of loop   return 2
*/