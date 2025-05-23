// 242. Valid Anagram
// Complexity: O(nlgn) time, O(n) storage
// Notes: yes, i know hash map would be a more effecient solution
// Follow up: use hash

class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if(s == t)
                return true;
            return false;
        }
    };