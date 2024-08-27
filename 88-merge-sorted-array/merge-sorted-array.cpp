class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n -1;
        
        while( m > 0 && n > 0) {
            if(nums1[m - 1] < nums2[n - 1]) {
                nums1[last] = nums2[n-1];
                n -=1;
            }
            else {
                nums1[last] = nums1[m-1];
                m -=1;
            }
            last -= 1;
        }

        //fill up the smaller number is in nums2
        while (n > 0) {
            nums1[last] = nums2[n-1];
            n -=1;
            last -=1;
        }
    }
};

/* -1 because m and n represents the valid elements of arrays, not the indexes.
The array index starts at 0, so that the last index should be -1
*/