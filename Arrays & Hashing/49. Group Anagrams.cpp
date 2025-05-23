// 49. Group Anagrams
// Complexity: O(n * mlgm) time, O(n * m) storage
// Notes:
// Follow up: There is a better way

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const auto& originalString : strs){
            string sortedString = originalString;
            sort(sortedString.begin(), sortedString.end());
            anagramGroups[sortedString].push_back(originalString);
        }

        vector<vector<string>> groupedAnagrams;
        for (auto& groupPair : anagramGroups){
            groupedAnagrams.push_back(groupPair.second);
        }
        return groupedAnagrams;
    }
};