// 1. Two Sum
// Conplexity: O(n^2) time, O(1) storage
// Notes:
// Follow up: Come back again and solve it with O(n)

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i = 0; i < nums.size() - 1; i++){
                for(int j = i + 1; j < nums.size(); j++){
                    if(nums[i] + nums[j] == target)
                        return {i, j};
                }
            }
            return {};
        }
    };