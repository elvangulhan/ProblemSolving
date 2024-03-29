// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r(2);
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j && nums[i] + nums[j] == target){
                    r[0] = i; r[1] = j;
                }
            }
        }
        return r;
    }
};