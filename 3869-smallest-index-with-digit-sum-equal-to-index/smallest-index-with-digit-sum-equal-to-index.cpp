class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mx = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int rem = 0;
            while(num > 0){
                rem += num%10;
                num /= 10;
            }
            if(rem == i) mx = mx > i ? i : mx;
            cout << rem <<" "<<mx<<endl;
        }
        return mx == INT_MAX ? -1 : mx;
    }
};