class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int j = 0;
        for(int i=nums[0]; i<=nums.back();){
            if(i == nums[j]){
                j++;
                i++;
            }
            else {
                ans.push_back(i);
                i++;
            }
        }
        return ans;
    }
};