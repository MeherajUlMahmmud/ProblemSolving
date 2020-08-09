String[] composeRanges(int[] nums) {
    String[] strArr = new String[0];
    if(nums.length == 0)
        return strArr;
    
    List<String> strs = new ArrayList<>();
    int start = 0, end = 0;
    for(int i = 1; i < nums.length; i++) {
        if(nums[i] - nums[end] == 1) {
            end++;
        }
        else {
            if(start != end) {
                strs.add(nums[start] + "->" + nums[end]);
            }
            else {
                strs.add(String.valueOf(nums[end]));
            }
            start = i;
            end = i;
        }
    }
    if(start != end) {
        strs.add(nums[start] + "->" + nums[end]);
    }
    else {
        strs.add(String.valueOf(nums[end]));
    }
    String[] strArr2 = new String[strs.size()];
    strs.toArray(strArr2);
    
    return strArr2;
}
