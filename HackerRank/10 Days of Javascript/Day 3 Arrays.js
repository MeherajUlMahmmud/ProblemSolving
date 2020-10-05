function getSecondLargest(nums) {
    // Complete the function
    let firstLargest = nums[0];
    let secondLargest = -1;
    for(let i = 1; i < nums.length; i++) {
        if(nums[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = nums[i];
        }
        if(nums[i] > secondLargest && nums[i] < firstLargest) {
                secondLargest = nums[i];
        }
        
    }
    return secondLargest;
}