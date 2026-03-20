class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n=prices.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && prices[i]<st.top()) st.pop();
            ans[i]=st.empty()?prices[i]:(prices[i]-st.top());
            st.push(prices[i]);
        }
        return ans;
    }
};