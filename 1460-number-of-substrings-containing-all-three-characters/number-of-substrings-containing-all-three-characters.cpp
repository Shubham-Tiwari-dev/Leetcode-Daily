class Solution {
public:
    bool valid(vector<int> &v){
        for(int x:v) if(x<=0) return false;
        return true;
    }
    int numberOfSubstrings(string s) {
        long long n=s.size();
        long long total=(n*(n+1))/2;
        int left=0;
        vector<int>v(3,0);
        for(int right=0;right<s.size();right++){
            v[s[right]-'a']++;
            while(left<=right && valid(v)){
                v[s[left]-'a']--;
                left++;
            }
            total-=(right-left+1);
        }
        return total;
    }
};