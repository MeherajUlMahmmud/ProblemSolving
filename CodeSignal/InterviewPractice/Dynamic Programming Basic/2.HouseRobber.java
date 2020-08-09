// Based on the problem statement, we will set the initial conditions:

//     1. if there is no house, the robber can’t steal any money
//     2. if there is only one house, the robber can only steal that house
//     3. if there are two or more houses, the robber will try to steal the maximum amount of money without stealing from the two adjacent houses

//    intlength = nums.length
//    if(length === 0){
//       return 0
//    } else if(length === 1){
//       return nums[0]
//    }


// We will subset the last condition to solve it with dynamic programming. For example, let’s say the input is below:

// [ 1, 3, 4, 4, 3, 3, 7, 2, 3, 4, 5, 1 ]

// We will compare the amount the robber can steal from the first house and the second house.

// 1 or 3 ? 3 is bigger, so the robber will go to steal 3

// On the third house, the robber will think about whether it’s better to steal only 3 or 1+4 =5. The robber will steal 5 as it’s a bigger number. Then the robber will decide if he should steal 5 or 3+4=7. The robber will go for 7 and so on. This notation can be written as below:

//   1  3  5  7  8 10 15 15 18 19 23 23
// [ 1, 3, 4, 4, 3, 3, 7, 2, 3, 4, 5, 1 ]

// Notice that since the third house, we’ve compared the nums[i] + nums[i-2] and nums[i-1] in order to see which choice could be maximum. If we convert this logic into code:


int houseRobber(int[] nums) {
    if(nums.length == 0)
        return 0;
    if(nums.length == 1)
        return nums[0];
   int[] houses = new int[nums.length];
   houses[0] = nums[0];
   houses[1] = Math.max(nums[0], nums[1]);
    for(int i = 2; i < nums.length; i++) {
        houses[i] = Math.max(nums[i] + houses[i-2], houses[i-1]);
     // house[2] = Math.max(nums[2] + house[0]), house[1]) => 5
     // house[3] = Math.max(nums[3] + house[1]), house[2]) => 7
     // house[4] = Math.max(nums[4] + house[2]), house[3]) => 8
    }
    return houses[nums.length -1];
}
