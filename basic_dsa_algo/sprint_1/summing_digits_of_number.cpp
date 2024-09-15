#include<iostream>
#include<bits\stdc++.h>
#include<cmath>

using namespace std;

class Op{

    public:

    int sumOfdigitsNumber(int n){
        double sum = 0;

        while(n > 0){
            sum+= n %10;

            n /=10;
        }
        return sum;
    }
} ;
int main() {
    Op ob;
    int n = 12345;

    cout<<ob.sumOfdigitsNumber(n);
    return 0 ;
}
