#include<iostream>
#include<bits\stdc++.h>

using namespace std;
class Fact{
    public:

    int fact(int n){
    
    if(n==0) return 1;

    else {
        return (n) * fact(n-1) ;
    }
}

};


int main() {
    int n = 0;
    Fact obj;
    cout<<obj.fact(n);
    return 0 ;



}