class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sz=ssize(piles)/2;
        int left=0,res=0,curr=0;
        for(int right=0;right<ssize(piles);right++){
            curr+=piles[right];
            if(right-left+1==sz){
                res=max(res,curr);
                curr-=piles[left];
                left++;
            }
        }
        return res>accumulate(piles.begin(),piles.end(),0)-res;
    }
};