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