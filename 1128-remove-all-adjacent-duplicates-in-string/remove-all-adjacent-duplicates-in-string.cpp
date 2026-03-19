class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans;
        for(char x:s){
            if(!st.empty() && st.top()==x){
                st.pop();
            }
            else st.push(x);
        }
        int temp=st.size();
        for(int i=0;i<temp;i++){
            if(!st.empty()){
            ans+=st.top();
            st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};