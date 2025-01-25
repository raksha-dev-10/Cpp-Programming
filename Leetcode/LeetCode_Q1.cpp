//two sum
//Link: https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array&
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i <= nums.size()-2; i++) {
            for(int j=i+1; j< nums.size(); j++){
            if (nums[i] + nums[j]== target) {
                return {i, j};
            }
            }
        }
        return {};
    }
};
