// 217. Contains Duplicate
// Conplexity: O(nlgn) time, O(lgn) storage
// Notes: We can do brute force but that would be n^2 which sucks, 
// Follow up: Try solving it using hash set & hash map after you learn them

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
    
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i] == nums[i+1])
                    return true;
            }
            return false;
        }
    };