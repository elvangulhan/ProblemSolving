// https://leetcode.com/problems/sequential-digits/
/**
 * @param {number} low
 * @param {number} high
 * @return {number[]}
 */
var sequentialDigits = function(low, high) {
    let digit_low   = (low+"").length;
    let digit_high  = (high+"").length;
    let digit_diff  = digit_high - digit_low;
    let result      = [];
    for(let i = 0; i <= digit_diff; i++){
        let current_digit = (digit_low + i);
        let current = 1 * Math.pow(10, (current_digit - 1));
        let _current = current.toString().split('');
        for(let k = 1; k <= 10 - current_digit; k++){
            _current[0] = k;
            for(let j = 1; j < current_digit; j++){
                _current[j] = k + j;
            }
            current = parseInt(_current.join(''));
            if(current >= low && current <= high)
                result.push(current);
            if(current > high)
                break;
        }
    }
    return result;
};

sequentialDigits(100,300);