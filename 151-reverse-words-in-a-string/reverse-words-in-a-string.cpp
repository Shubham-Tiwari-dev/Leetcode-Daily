class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        string ans="",temp="";
        while(i>=0){
            while(i>=0 && s[i]!=' '){
                temp=s[i]+temp;
                i--;
            }
            if(temp!="") ans=ans+temp+' ';
            temp="";
            i--;
        }
        ans.pop_back();
        return ans;
    }
};