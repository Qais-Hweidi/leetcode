// 169. Majority Element  
// Complexity: O(n) time, O(n) storage
// Notes:
// Follow up: solve it with O(n), O(1) storage

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        int n = nums.size();
        int result = 0;

        for(int num : nums){
            counter[num]++;
            if(counter[num] > n/2){
                result = num;
            }
        }

        return result;
    }
};