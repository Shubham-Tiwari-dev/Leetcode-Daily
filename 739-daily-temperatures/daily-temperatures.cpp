class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size(), max=0, count=0;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            ans[i]=st.empty()?0:st.top()-i;
            st.push(i);
        }
        return ans;
    }
};