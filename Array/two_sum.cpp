#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prime;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 
            
           
            if (prime.find(complement) != prime.end()) {
                return {prime[complement], i};
            }
            
            prime[nums[i]] = i;
        }
        
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
