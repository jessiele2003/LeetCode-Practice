class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //last index of nums1 <=> length of nums1
        int last = m + n -1;

        //compare and merge into nums1
        //start from the end of nums1 and fill up
        while (m > 0 && n > 0) {
            if(nums1[m - 1] > nums2[n - 1]) {
                nums1[last] = nums1[m - 1];
                m -= 1;
            }
            else {
                nums1[last] = nums2[n - 1];
                n -= 1;
            }
            last -= 1;
        }

        //if the smallest number is in nums2
        //fill nums1 with leftover of nums2
        while(n > 0) {
            nums1[last] = nums2[n - 1];
            n-= 1;
            last -= 1;
        }
    }
};



/*
nums1:  1   2   3   0   0   0

nums2:  2   5   6

1st: compare 3 < 6 => nums1: 1  2   3   0   0   6
2nd: compare 3 < 5 => nums1: 1  2   3   0   5   6
3rd: compare 3 > 2 => nums1: 1  2   3   3   5   6
4th: compare 2 = 2 => nums1: 1  2   2   3   5   6   take the 2 from nums1
5th: compare 1 < 2 => nums1: 1  2   2   3   5   6   take the 2 from nums2

special case: where the last element of nums1 is larger than nums2
=> merge leftover from nums2 to fill up nums1
*/