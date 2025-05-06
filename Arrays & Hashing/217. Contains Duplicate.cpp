// 217. Contains Duplicate
// Conplexity: O(nlgn) time, O(lgn) storage
// Notes:
// Follow up:

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         for(int i=0; i<nums.size()-1; i++){
//             if(nums[i] == nums[i+1])
//                 return true;
//         }
//         return false;
//     }
// };

/***************************************************************/

// 217. Contains Duplicate
// Conplexity: O(n) time, O(n) storage
// Notes:
// Follow up:

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> duplicate;
    
            for(int num : nums){
                if(duplicate.contains(num))
                    return true;
    
                duplicate.insert(num);
            }
    
            return false;
        }
    };