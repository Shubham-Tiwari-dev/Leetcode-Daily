class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=0,count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(ans==0 && count>0){
                    ans=abs(i-start);
                    count--;
                }
                else{
                    ans=min(ans,abs(i-start));
                }
            }
        }
        return ans;
    }
};