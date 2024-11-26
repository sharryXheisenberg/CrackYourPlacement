
#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &arr) {
    int n = arr.size();
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    
    while (mid <= hi) {
        if (arr[mid] == 0){
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else{
            swap(arr[mid], arr[hi]);
            hi--;
        }
    }
}

int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    int n = arr.size();

    sort012(arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}