class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;
        
        for(int right = 1; right < nums.size(); ++right) //set both left and right pointers to second place
        //because first value whatever we update it will stays the same
        {
            if(nums[right] != nums[right -1]) //if the current value and the value next to the current value
            //is not equal   => found the unique value
            {
                nums[left] = nums[right];    //swap the left value to the right value
                left += 1;
            }
        }
        return left;
    }
};



/*
nums: 1 1   2
        l
        r
1st: compare 1 vs 1 => equal -> 1   1   2
                                    l
                                    r
2nd: compare 1 vs 2 => not equal -> 1   2
                                        l
                                        r
*/