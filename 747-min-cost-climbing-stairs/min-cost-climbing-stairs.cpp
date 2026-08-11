class Solution {
public:
    int solve(vector<int>& cost, vector<int> &dp, int n){
        if(n <= 1) return 0;
        if(dp[n] != -1) return dp[n];
        return dp[n] = min(cost[n-1] + solve(cost, dp, n-1), cost[n-2] + solve(cost, dp, n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        return solve(cost, dp, n);
    }
};