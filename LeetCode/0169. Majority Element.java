class Solution {
    public int majorityElement(int[] arr) {
        return majorityElementRec(arr, 0, arr.length-1);
    }
    
    private int majorityElementRec(int[] arr, int lo, int hi) {
        if(lo == hi) {
            return arr[lo];
        }
        
        int mid = (hi-lo)/2 + lo;
        int left = majorityElementRec(arr, lo, mid);
        int right = majorityElementRec(arr, mid+1, hi);
        
        if(left == right)
            return left;
        
        int leftCount = countInRange(arr, left, lo, hi);
        int rightCount = countInRange(arr, right, lo, hi);
        
        return leftCount > rightCount ? left : right;
    }
    
    private int countInRange(int[] arr, int num, int lo, int hi) {
        int count = 0;
        for(int i = lo; i <= hi; i++) {
            if(arr[i] == num) {
                count++;
            }
        }
        return count;
    }
}