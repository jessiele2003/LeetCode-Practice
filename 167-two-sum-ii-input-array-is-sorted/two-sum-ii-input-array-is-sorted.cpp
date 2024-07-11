class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() -1;
        vector<int> answer;
        //loop through the array
        while(l < r) {
            int sum = numbers[l] + numbers[r];

            if(sum > target) {
                //decrease on the right -> going backward
                --r;
            }
            if(sum < target)
                ++l;
            if (sum == target) {
                answer.push_back(l + 1);
                answer.push_back(r +1);
                return answer;
            }
        }
        return answer;
    }
};