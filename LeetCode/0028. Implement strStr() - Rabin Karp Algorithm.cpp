class Solution {
public:
    int strStr(string str, string pat) {
        int n = str.size();
        int m = pat.size();
        
        if(m == 0) return 0;
        if(n < m) return -1;
        
        else {
            int n = str.length();
            int m = pat.length();
            int i, j;                                // iterators for loops
            int s = 0, p = 0;                        // s = hash of string, p = hash of pattern
            const int pm = 256;                      // no of characters in alphabet
            const int q = 101;                       // large prime number
            int h = 1;                               // h = multiplier for MSB
            bool flag = false;
            
            // the value of h would be eqv to pow(pm, m-1)
            for (i = 0; i < m-1; i++)
                h = (h * pm) % q;
            
            // calculating initial hash for string and pattern
            for (i = 0; i < m; i++) {
                s = (pm * s + str[i]) % q;
                p = (pm * p + pat[i]) % q;
            }
            
            for (i = 0; i <= n-m; i++) {
            if (s == p) {                       // comparing hash of string and pattern
                for (j = 0; j < m; j++)
                    if (str[i+j] != pat[j])
                        break;
                if (j == m) {
                    flag = true;
                    return i;
                }
            }
            // calculating hash of next substring
            s = (pm * (s - h * str[i]) + str[i+m]) % q;
            if (s < 0)                          // still dont know why we do this :|
                s = s + q;
            }
            if (!flag)
                return -1;
        }
        return -1;
    }
};