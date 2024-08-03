#include <algorithm>
#include <vector>
#include <iostream>

class Solution {
public:
    int minMoves2(std::vector<int>& nums) {
       
        std::sort(nums.begin(), nums.end());
        
       
        int median = nums[nums.size() / 2];
        
       
        int moves = 0;
        for(int num : nums) {
            moves += abs(num - median);
        }
        
        return moves;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {1, 2, 3};
    std::vector<int> nums2 = {1, 10, 2, 9};

    std::cout << "Moves for [1,2,3]: " << solution.minMoves2(nums1) << std::endl;
    std::cout << "Moves for [1,10,2,9]: " << solution.minMoves2(nums2) << std::endl;

    return 0;
}
