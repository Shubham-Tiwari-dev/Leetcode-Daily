class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorsum=0;
        bool allzero=true;
        for(int i : nums){
            xorsum ^= i;
            if(i !=0) allzero = false;
        }
        if(allzero) return 0;
        if(xorsum != 0) return nums.size();
        else return nums.size() - 1;
    }
};