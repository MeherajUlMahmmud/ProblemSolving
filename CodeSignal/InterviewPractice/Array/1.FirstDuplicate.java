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
