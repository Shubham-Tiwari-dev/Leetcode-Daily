class Solution {
public:
    bool isPalindrome(string s) {
        string temp = s;
        temp.erase(remove_if(temp.begin(), temp.end(), [](unsigned char c) {
        return !isalnum(c); 
    }), temp.end());
        int l = 0, r = temp.size()-1;
        while(l<r){
            if(tolower(temp[l]) == tolower(temp[r])){
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
};