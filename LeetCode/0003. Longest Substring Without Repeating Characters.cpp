class Solution {
public:
    int max(int a, int b) {
        if(a > b) return a;
        else return b;
    }
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        set<char> set;
        int left = 0, right = 0, length = 0;
        while(right < s.length()) {
            if(set.find(s[right]) == set.end()){
                set.insert(s[right]);
                right++;
                length = max(length, set.size());
            } else {
                set.erase(s[left]);
                left++;
            }
        }
        return length;
    }
};s