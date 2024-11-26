#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int newBs(vector<int> &arr, int k) {
    auto r = equal_range(arr.begin(), arr.end(), k);

    return r.second - r.first; 
}

int main() {
    vector<int> v = {1, 3, 4, 5, 5, 5, 6, 9}; 
    int k = 5; 
    int ko = newBs(v, k);

    cout << "Count of " << k << " is: " << ko << endl; 
    return 0;
}
