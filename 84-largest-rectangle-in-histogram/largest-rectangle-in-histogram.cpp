class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> left(n,-1),right(n,n);

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<=heights[st.top()])st.pop();
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()])st.pop();
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        int maxarea=0;
        for(int i=0;i<n;i++){
            maxarea=max(maxarea,(right[i]-left[i]-1)*heights[i]);
        }
        return maxarea;

    }
};