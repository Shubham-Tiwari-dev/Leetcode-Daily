class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp=0, ans=0;
        for(int i=0; i<nums.size();i++){
            int cnt=1;
            temp=nums[i];
            while(temp>=10){
                temp=temp/10;
                cnt++;
            }
            if(cnt%2==0) ans++;
        }
        return ans;
    }
};