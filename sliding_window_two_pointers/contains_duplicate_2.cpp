#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> lastIndex; 

    for (int i = 0; i < nums.size(); ++i) {
        if (lastIndex.find(nums[i]) != lastIndex.end()) {
            if (i - lastIndex[nums[i]] <= k) {
                return true; 
            }
        }
        lastIndex[nums[i]] = i;
    }
    return false; 
}

int main() {
    vector<int> nums = {1, 2, 3, 1}; 
    int k = 3;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
