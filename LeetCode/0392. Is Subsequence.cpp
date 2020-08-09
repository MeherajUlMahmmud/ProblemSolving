class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0)
            return true;
        
        int s_pointer = 0;
        int t_pointer = 0;
        while(t_pointer < t.size()) {
            if(s[s_pointer] == t[t_pointer]) {
                s_pointer++;
                if(s_pointer == s.size())
                    return true;
            }
            t_pointer++;
        }
        return false;
    }
};
