// 125. Valid Palindrome
// Complexity: O(n) time, O(n) storage
// Notes:
// Follow up: Come back again and solve it with O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";
        for (char c : s){
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9'){
                newS += tolower(c);
            }
        }

        int l = 0;
        int r = newS.size() - 1;

        while (l < r){
            if(newS[l] != newS[r]){
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};