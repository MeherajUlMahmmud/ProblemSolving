char firstNotRepeatingCharacter(String s) {
    HashMap<Character, Integer> charCounts = new HashMap<>();
    for(int i = 0; i < s.length(); i++) {
        char c = s.charAt(i);
        if(charCounts.containsKey(c)) {
            charCounts.put(c, charCounts.get(c)+1);
        }
        else {
            charCounts.put(c, 1);
        }
    }
    
    for(int i = 0;  i < s.length(); i++) {
        char c = s.charAt(i);
        if(charCounts.get(c) == 1)
            return c;
    }
    
    return '_';
}
