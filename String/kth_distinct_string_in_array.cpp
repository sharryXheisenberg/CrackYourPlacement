#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> frequency;
        
       
        for (const string& str : arr) {
            frequency[str]++;
        }
        
        
        int distinctCount = 0;
        for (const string& str : arr) {
            if (frequency[str] == 1) {
                distinctCount++;
                if (distinctCount == k) {
                    return str;
                }
            }
        }
        
       
        return "";
    }
};

int main() {
    Solution sol;
    vector<string> arr1 = {"d", "b", "c", "b", "c", "a"};
    int k1 = 2;
    cout << "Example 1: " << sol.kthDistinct(arr1, k1) << endl; 
    
    vector<string> arr2 = {"aaa", "aa", "a"};
    int k2 = 1;
    cout << "Example 2: " << sol.kthDistinct(arr2, k2) << endl; 
    
    vector<string> arr3 = {"a", "b", "a"};
    int k3 = 3;
    cout << "Example 3: " << sol.kthDistinct(arr3, k3) << endl; 

    return 0;
}
