class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] arr = new int[2];
        for(int i = 0;  i < nums.length; ++i) {
            for(int j = 0; j < nums.length; ++j) {
                if(i == j)
                    continue;
                else {
                    if(nums[i] + nums[j] == target) {
                        arr[0] = j;
                        arr[1] = i;
                        break;
                    }
                }
            }
        }
        return arr;
    }
}
