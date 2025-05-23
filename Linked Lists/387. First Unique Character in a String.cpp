// 387. First Unique Character in a String
// Complexity: O(n^2) brute force, O(1) storage
// Notes:
// Follow up: do it with O(n)

class Solution {
    public:
        int firstUniqChar(string s) {
            for(int i=0; i<s.size(); i++){
                bool flag = true;
                for(int j=0; j<s.size(); j++){
                    if(i == j)
                        continue;
                    if(s[i] == s[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag == true)
                    return i;
            }
            return -1;
        }
    };