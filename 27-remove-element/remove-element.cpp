class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for( int i = 0; i < nums.size(); ++i) {
            //if found the number 2, then swap with number is not 2
            if(nums[i] != val) {
                nums[k] = nums[i];
                k += 1;

            }
        }
        return k;
    }
};