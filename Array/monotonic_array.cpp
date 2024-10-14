#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;  
    bool decreasing = true;  

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            decreasing = false; 
        }
        if (nums[i] > nums[i + 1]) {
            increasing = false; 
        }
    }

    return increasing || decreasing;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};  
    bool result = isMonotonic(nums);

    if (result) {
        cout << "Monotonic array" << endl;
    } else {
        cout << "Not a monotonic array" << endl;
    }

    return 0;
}
