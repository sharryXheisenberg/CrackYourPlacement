// Given a sorted array and a value x, the ceiling of x is the smallest element in an array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume that the array is sorted in non-decreasing order. Write efficient functions to find the floor and ceiling of x. 
// Examples : 

// For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
// For x = 0:    floor doesn't exist in array,  ceil  = 1
// For x = 1:    floor  = 1,  ceil  = 1
// For x = 5:    floor  = 2,  ceil  = 8
// For x = 20:   floor  = 19,  ceil doesn't exist in array










#include <iostream>
#include <vector>
using namespace std;

void findFloorCeil(const vector<int>& arr, int x, int& floor, int& ceil) {
    int low = 0, high = arr.size() - 1;
    floor = -1; 
    ceil = -1; 

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            floor = arr[mid];
            ceil = arr[mid];
            return;
        } else if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 5;

    int floor, ceil;
    findFloorCeil(arr, x, floor, ceil);

    cout << "Floor of " << x << " is " << (floor == -1 ? "doesn't exist" : to_string(floor)) << endl;
    cout << "Ceil of " << x << " is " << (ceil == -1 ? "doesn't exist" : to_string(ceil)) << endl;

    return 0;
}
