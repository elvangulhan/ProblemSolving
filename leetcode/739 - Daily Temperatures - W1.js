// https://leetcode.com/problems/daily-temperatures/
/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function(temperatures) {
    let n = temperatures.length;
    let answer = new Array(n).fill(0);
    for(let i = 0; i < n; i++){
        let high = temperatures[i];
        let dc  = -1;
        for(let j = i+1; j < n; j++){
            dc++;
            if(temperatures[j] > high){
                answer[i] = dc+1;
                break;
            }
        }
    }
    return answer;
};