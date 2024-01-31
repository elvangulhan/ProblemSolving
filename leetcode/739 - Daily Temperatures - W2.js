// https://leetcode.com/problems/daily-temperatures/
/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function(temperatures) {
    let n = temperatures.length;
    let answer = new Array(n).fill(0);
    let stack = [];
    for(let i = 0; i < n; i++){
        while(stack.length > 0 && temperatures[i] > temperatures[stack[stack.length-1]]){
            let idx = stack.pop()
            answer[idx] = i - idx; 
        }
        stack.push(i)
    }
    return answer;
};