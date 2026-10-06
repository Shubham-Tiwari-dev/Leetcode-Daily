class Solution {
public:
    int minAddToMakeValid(string s) {
       int cnt = 0;
       stack<char> st;
       for(char x : s){
           if(!st.empty() && (st.top() == '(' && x == ')')) st.pop();
           else st.push(x);
       }
       while(!st.empty()){
        st.pop();
        cnt++;
       }
       return cnt;
    }
};