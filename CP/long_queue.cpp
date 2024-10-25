#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int Solve(int arr[] , int n){
    int cnt = 0 ;
    int wealth = 0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            wealth = arr[j];
            if(arr[i]<=abs(wealth)/2){
                cnt++;
            }
            else{
                continue;
            }
        }
    }
    return n - cnt;
}

int main(){
    
    int arr[] = {1, 4, 5, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<Solve(arr,n);
    return 0;
}