class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            size_t pos = temp.find(x);
            if(pos != string::npos) ans.push_back(i);
        }
        return ans;
    }
};