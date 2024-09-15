#include<iostream>
#include<bits\stdc++.h>
using namespace std;

class Ol{
    public:

    void validateLeap(long n){
        if(n%4==0 || n%400==0){
            cout<<"It is leap year";
        }
        else{
            cout<<"it is not leap year";
        }
    }

};

int main() {
    Ol obj;
    long n = 2021;
    obj.validateLeap(n);
    return 0;
}
