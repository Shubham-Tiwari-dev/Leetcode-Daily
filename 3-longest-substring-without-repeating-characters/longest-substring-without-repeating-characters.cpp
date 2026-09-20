class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxlen=0;
        unordered_set<char>sh;
        for(int right=0;right<s.size();right++){
            while(sh.find(s[right])!=sh.end()){
                sh.erase(s[left]);
                left++;
            }
            sh.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};