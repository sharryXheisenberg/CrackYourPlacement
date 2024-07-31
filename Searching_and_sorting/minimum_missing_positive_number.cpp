#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};

int main() {
    Solution solution;
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << solution.missingNumber(arr1, n1) << endl; 

    int arr2[] = {0, -10, 1, 3, -20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << solution.missingNumber(arr2, n2) << endl; 

    return 0;
}
