// using mathematical expression (only valid for positive integers)
int firstDuplicate(int[] a) {
    for(int i = 0; i < a.length; i++) {
        if(a[Math.abs(a[i]) - 1] < 0) {
            return Math.abs(a[i]);
        }
        else {
            a[Math.abs(a[i]) - 1] = -a[Math.abs(a[i]) - 1];
        }
    }
    return -1;
}

// using set (set only contains distinct elements)
int firstDuplicate(int[] a) {
    Set<Integer> set = new HashSet<>();
    for(int i = 0; i < a.length; i++) {
        if(!set.add(a[i])) {
            return a[i];
        }
    }
    return -1;
}

