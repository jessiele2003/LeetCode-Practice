class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums;

        for(int i = 0; i < nums.size(); ++i) {
            if(uniqueNums.find(nums[i]) != uniqueNums.end())
                return true;
            uniqueNums.insert(nums[i]);
        }
        return false;
    }
};

/*
        1   2   3   1
        uniqueNums = {1}    loop1
        uniqueNums = {1, 2}    loop2
        uniqueNums = {1, 2, 3}    loop3
        uniqueNums = {1, 2, 3}    loop4   return true
*/