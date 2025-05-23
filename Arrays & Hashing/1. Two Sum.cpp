// 1. Two Sum
// Complexity: O(n^2) time, O(1) storage
// Notes:
// Follow up: Come back again and solve it with O(n)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size() - 1; i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 if(nums[i] + nums[j] == target)
//                     return {i, j};
//             }
//         }
//         return {};
//     }
// };

/***************************************************************/

// 1. Two Sum
// Complexity: O(n) time, O(n) storage
// Notes:
// Follow up:

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> hashy;
    
            for(int i = 0; i < nums.size(); i++){
                hashy[nums[i]] = i;
            }
    
            for(int i = 0; i < nums.size(); i++){
                int difference = target - nums[i];
                if(hashy.contains(difference) && hashy[difference] != i){
                    return {i, hashy[difference]};
                }
            }
    
            return {};
        }
    };