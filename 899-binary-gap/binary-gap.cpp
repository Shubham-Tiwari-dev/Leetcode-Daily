class Solution {
public:
    int binaryGap(int n) {
        string temp="";
        while(n>0){
            temp+=to_string(n%2);
            n/=2;
        }
        int curr=0,max_count=0;
        int i=0;
        while(i<temp.length() && temp[i]=='0') i++;
        i++;
        for(;i<temp.size();i++){
            if(temp[i]=='0') curr++;
            else{
                max_count=max(max_count,curr+1);
                curr=0;
            }
        }
        return max_count;;
    }
};