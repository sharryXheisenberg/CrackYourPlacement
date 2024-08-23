#include <vector>
#include<iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; 
        int currentOddCount = 0;
        int result = 0;

        for (int num : nums) {
            if (num % 2 != 0) {
                currentOddCount++;
            }

            if (prefixSumCount.find(currentOddCount - k) != prefixSumCount.end()) {
                result += prefixSumCount[currentOddCount - k];
            }

            prefixSumCount[currentOddCount]++;
        }

        return result;
    }
};


int main() {
    Solution obj;
    vector<int> v = { 1,1,2,1,1};
    int k = 3;
    int t = obj.numberOfSubarrays(v, k);
    cout<<t<<endl;
    return 0;

}