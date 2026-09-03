class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans="";
        bool flag=false;
        if(k>n) return "";
        int i=0;
        int cnt=0;
        for(int j=0;j<n;j++){
            if(s[j]=='1') cnt++;
            while(i<=j && cnt>k){
                cnt-=s[i]-'0';
                i++;
            }
            if(cnt==k){
               while(i<=j && s[i]=='0') i++;
               int len=j-i+1;
               string curr=s.substr(i,len);
               if(!flag){
                flag=true;
                ans=curr;
               }
               else{
                if(len<ans.size() || (len==ans.size() && curr<ans)) ans=curr;
               }
        }
    }
        return ans;
    }
};