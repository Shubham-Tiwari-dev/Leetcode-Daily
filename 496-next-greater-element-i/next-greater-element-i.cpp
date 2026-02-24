class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n=nums1.size(), m=nums2.size();
        vector<int> temp(m);
        vector<int> ans(n);
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=nums2[st.top()]) st.pop();
            temp[i]=st.empty()?-1:nums2[st.top()];
            st.push(i);
        }
        for(int i=0;i<n;i++){
            int j=0;
            while(j<m && nums1[i]!=nums2[j]) j++;
            ans[i]=temp[j];
        }
        return ans;
    }
};