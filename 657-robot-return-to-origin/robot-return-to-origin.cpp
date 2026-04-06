class Solution {
public:
    bool judgeCircle(string moves) {
        if (moves.length() & 1) return false;

        int f[4] = {};

        for (char c : moves)
            f[(c ^ (c >> 2)) & 3]++;
        return f[0] == f[1] && f[2] == f[3]; 
    }
};