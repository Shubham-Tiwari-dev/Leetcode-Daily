class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        for(char a:s){
            if(a=='(') count++;
            else count--;

            if((count==1 && a=='(')||(count==0 && a==')')) continue;
            ans+=a;
        }
        return ans;
    }
};