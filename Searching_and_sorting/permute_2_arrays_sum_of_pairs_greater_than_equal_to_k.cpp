// Permute two arrays such that sum of every pair is greater or equal to K
// Given two arrays of equal size n and an integer k. The task is to permute both arrays such that sum of their corresponding element is greater than or equal to k i.e a[i] + 
#include<iostream>
using namespace std;

bool isPossile(int a[] , int b[] , int k){
    sort(a , a+n);  // sorting in increasing order

    sort(b , b+n , greater<int>()); // sort in decreasing order 

    for (int i = 0; i < n; i++)
        if (a[i] + b[i] < k)
            return false;

    return true;
}


int main()
{
    int a[] = { 2, 1, 3 };
    int b[] = { 7, 8, 9 };
    int k = 10;
    int n = sizeof(a) / sizeof(a[0]);

    isPossible(a, b, n, k) ? cout << "Yes" : cout << "No";
    return 0;
}