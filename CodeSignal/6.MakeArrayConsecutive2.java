int makeArrayConsecutive2(int[] statues) {
    Arrays.sort(statues);
    int count = 0, i = 0;
    while(i < statues.length-1) {
        if(statues[i]+1 == statues[i+1]) {
            i++;
        }
        else if(statues[i]+1 != statues[i+1]) {
            count++;
            statues[i] = statues[i]+1;
        }
    }
    return count;
}
