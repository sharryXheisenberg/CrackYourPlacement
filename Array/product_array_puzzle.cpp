#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n = nums.size();
        vector<long long int> left(n, 1);
        vector<long long int> right(n, 1);
        vector<long long int> result(n);

       
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        
        for (int i = 0; i < n; i++) {
            result[i] = left[i] * right[i];
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<long long int> nums = {10, 3, 5, 6, 2};
    
    vector<long long int> result = sol.productExceptSelf(nums);
    
    for (long long int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
