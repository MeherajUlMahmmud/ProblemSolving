class Solution {
public:
    string reverseStr(string& s, int k) {        
        int i = 0, n = s.size();
        while(i < n) {
            reverse(s.begin() + i, s.begin() + min(i + k, n));
            i = i + 2 * k;
        }
        return s;
    }
};