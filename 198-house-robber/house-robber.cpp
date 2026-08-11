class Solution {
public:
    int solve(vector<int> &nums, vector<int> &dp, int i){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+solve(nums, dp, i-2), solve(nums, dp, i-1));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
       return solve(nums, dp, nums.size()-1);
    }
};