// https://leetcode.com/problems/power-of-two/
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    if(n < 0) return false;
    let binary = n.toString(2);
    return binary.split('1').length == 2;
};

isPowerOfTwo(-16);

/*
Expl.:
    On binary base, numbers with a power of 2 only contain a single '1' bit. Therefore,
    when we split 1 using split, the length should always be 2.
    
Açıklama:
    İkili tabanda 2 üssü olan her sayı yalnızca 1 adet 1 biti içerirler. Bu nedenle 1 i split ile böldüğümüzde length her zaman 2 olmalıdır.
*/