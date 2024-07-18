#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int product1 = nums[n-1] * nums[n-2] * nums[n-3];
        int product2 = nums[0] * nums[1] * nums[n-1];
        
        return std::max(product1, product2);
    }
};