// 75. Sort Colors
// Complexity: O(n) time, O(1) storage
// Notes:
// Follow up: Try solving it using vectors & pointers

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int zero=0, one=0, two=0;
    
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0)
                    zero++;
                else if(nums[i] == 1)
                    one++;
                else if(nums[i] == 2)
                    two++;
            }
    
            int index=0;
            for(int i=0; i<zero; i++)
                nums[index++] = 0;
            for(int i=0; i<one; i++)
                nums[index++] = 1;
            for(int i=0; i<two; i++)
                nums[index++] = 2;
        }
    };