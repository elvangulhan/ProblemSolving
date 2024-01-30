// https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string _x = to_string(x);
        for(int i = 0; i < _x.length(); i++){
            if(_x[i] != _x[_x.length()-i-1])
                return false;
        }
        return true;
    }
};