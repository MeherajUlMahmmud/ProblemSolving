class Solution {
public:
    int reverse(long x) {
        long rev = 0;
        bool isNeg = false;
        if(x < 0){
            isNeg = true;
            x = -x;
        }
        
        while(x > 0) {
            rev *= 10;
            rev += x % 10;
            x /= 10;
            
        }
        if(rev > INT_MAX)
            return 0;
        
        if(isNeg) {
            rev = -rev;
            return (int) rev;
        }
        return (int) rev;
        
    }
};