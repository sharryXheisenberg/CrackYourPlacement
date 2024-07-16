// promblem statement - You are given an array prices where prices[i] is the price of a given stock on the ith day.

//  You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. 

class Solution {
public:
    int maxProfit(std::vector<int>& nums) {
        int buy = nums[0];
        int profit = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < buy) {
                buy = nums[i];
            } else if (nums[i] - buy > profit) {
                profit = nums[i] - buy;
            }
        }
        return profit;
    }
};