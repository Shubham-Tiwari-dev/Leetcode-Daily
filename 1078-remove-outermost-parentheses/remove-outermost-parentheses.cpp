class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string res="";
        for(char x:s){
            if(x=='(') count++;
            else count--;
            if((count==1 && x=='(') || (count==0 && x==')')) continue;
            res+=x;
        }
        return res;
    }
};