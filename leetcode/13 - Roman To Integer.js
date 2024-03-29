// https://leetcode.com/problems/roman-to-integer/
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let vals = {'I':1, 'V': 5, 'X': 10, 'L': 50, 'C':100, 'D':500, 'M':1000};
    let sum = 0;
    for(let i = 0; i < s.length; i++){
        if(vals[s[i]] < vals[s[i+1]]){
            sum -= vals[s[i]];
        }else{
            sum += vals[s[i]];
        }
    }
    return sum;
};

romanToInt("III")