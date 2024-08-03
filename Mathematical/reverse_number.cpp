#include<iostream>
#include<bits\stdc++.h>

using namespace std ;

int main(){
    int n = 2556;
    // cout<<"Enter number"<<endl;
    // cin>>n;

    int reversed = 0 , remainder , ori ;

    while(n){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n/=10;
    }
    cout<<reversed;
    return 0 ;
}