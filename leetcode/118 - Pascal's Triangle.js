// https://leetcode.com/problems/pascals-triangle/
/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    let result = [[1]];
    for(let n = 1; n < numRows; n++){
        let row = [1];
        for(let k = 0; k < n - 1; k++){
            row.push(result[n-1][k]+result[n-1][k+1]);
        }
        row.push(1);
        result.push(row);
    }
    return result;
};

generate(1);