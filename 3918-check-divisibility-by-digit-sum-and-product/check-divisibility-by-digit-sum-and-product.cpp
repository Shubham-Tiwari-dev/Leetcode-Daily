class Solution {
public:
    bool checkDivisibility(int n) {
        if(n<=0) return false;
        int plus = 0, mul = 1, temp = n;
        while(temp>0){
            int digit = temp%10; 
            mul *= digit;
            plus += digit;
            temp /= 10; 
        }
        return n % (mul + plus) == 0;
    }
};