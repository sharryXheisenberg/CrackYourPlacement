// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        
        int sum = 0, result = 0;
        map[sum] = 1;
        
        for (int n : nums) {
            sum += n;
            result += map[sum - k];
            map[sum]++;
        }
        
        return result;
    }
};
