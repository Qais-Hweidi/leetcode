// 122. Best Time to Buy and Sell Stock II
// Complexity: O(n) time, O(1) storage
// Notes: greedy
// Follow up: You may try other solutions

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();

        for (int i = 0; i < n - 1; i++){
            if (prices[i + 1] > prices[i])
                profit += prices[i + 1] - prices[i];
        }

        return profit;
    }
};