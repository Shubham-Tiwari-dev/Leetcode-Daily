class Solution {
public:
    int countPrimes(int n) {
        vector<bool> temp(n+1, true);
        temp[0] = false;
        temp[1] = false;
        for(int i=2; i<=sqrt(n); i++) if(temp[i] != false) for(int j=i*i; j<=n; j+=i) temp[j] = false;
        int ans = 0;
        for(int i=0; i<n; i++) if(temp[i]==true) ans++;
        return ans;
    }
};