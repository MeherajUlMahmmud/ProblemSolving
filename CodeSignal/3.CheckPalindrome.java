boolean checkPalindrome(String s) {
    int i = 0, j = s.length()-1;
    while(i < j) {
        if(s.charAt(i) == s.charAt(j)) {
            i++;
            j--;
        }
        else
            return false;
    }
    
    return true;
}
