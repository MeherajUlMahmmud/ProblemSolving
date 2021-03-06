class Solution {
public:
    bool isAlphaNumeric(char ch) {
        if((ch >= '0' && ch <= '9')
                ||(ch >= 'A' && ch <= 'Z')
                ||(ch >= 'a' && ch <= 'z'))
            return true;

        return false;
    }

    char toLower(char ch) {
        int ascii_lower = int(ch);
        if(ch >= 'A' && ch <= 'Z')
            ascii_lower += 32;

        return char(ascii_lower);
    }

    bool checkPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while(left <= right) {
            if(s[left] != s[right])
                return false;

            left++;
            right--;
        }
        return true;
    }

    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.size(); i++) {
            if(isAlphaNumeric(s[i]))
                str += toLower(s[i]);
        }
        return checkPalindrome(str);
    }
};
