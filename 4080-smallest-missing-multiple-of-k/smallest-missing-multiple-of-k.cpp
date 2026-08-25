class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int temp = 0, maxi = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%k==0){
                mpp[nums[i]]++;
                temp = nums[i];
                maxi = max(temp, maxi);
            }
        }
        for(int i=k; i<=(maxi+k); i+=k){
            if(!mpp[i]) return i;
        }
        return 0;
    }
};