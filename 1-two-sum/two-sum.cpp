class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int i;
        int j;
        for(i = 0; i < nums.size() - 1; ++i) {
            for(j = i + 1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};