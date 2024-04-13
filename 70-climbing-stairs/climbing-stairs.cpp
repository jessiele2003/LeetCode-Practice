class Solution {
public:
    int climbStairs(int n) {
        vector<int> save_steps(n+1);
        return helper(n, save_steps);
    }

    int helper(int n, vector<int>& save_steps) {
        if( n ==1)
            return 1;
        if ( n == 2)
            return 2;
        if(save_steps[n] != 0) 
            return save_steps[n];
        save_steps[n] = helper(n - 1, save_steps) + helper(n - 2, save_steps);
        return save_steps[n];
    }
};