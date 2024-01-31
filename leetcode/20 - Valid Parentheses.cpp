// https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        bool valid = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' && s[i+1] != ')') return false;
            if(s[i] == '[' && s[i+1] != ']') return false;
            if(s[i] == '{' && s[i+1] != '}') return false;
        }
        return valid;
    }
};