// https://leetcode.com/problems/ant-on-the-boundary/
var returnToBoundaryCount = function(nums) {
    let result = 0;
    let sum = 0;
    for(let i = 0; i < nums.length; i++){
        sum += nums[i];
        if(sum == 0)
          result++;
    }
    return result;
  };