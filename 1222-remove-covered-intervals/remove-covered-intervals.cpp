class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[1] > b[1]) || (a[1] == b[1] && a[0] <= b[0]);
        });

        int merged = 0;

        int curr_l = nums[0][0], curr_r = nums[0][1];

        for (int i = 1; i < n; i++) {
            int next_l = nums[i][0];
            int next_r = nums[i][1];

            if (curr_l <= next_l && next_r <= curr_r) {
                merged++;
                continue;
            }

            curr_l = next_l;
            curr_r = next_r;
        }

        return n - merged;
    }
};