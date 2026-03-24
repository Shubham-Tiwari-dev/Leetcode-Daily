class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="",temp="";
        for(int i=n-1;i>=0;i--){
            while(i>=0 && s[i]!=' '){
                temp=s[i]+temp;
                i--;
            }
            if(temp!="") ans=ans+temp+' ';
            temp="";
        }
        ans.pop_back();
        return ans;
    }
};