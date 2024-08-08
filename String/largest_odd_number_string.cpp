#include<iostream>
#include<bits\stdc++.h>
#include<string>
#include<algorithm>
using namespace std ;

class Odd{
    public:

    class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        
        
        for (int i = n - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 != 0) { 
                return num.substr(0, i + 1); 
            }
        }
        
        
        return "";
    }
};


};


int main () {
    Odd obj;
    string s = "123";
    cout<<obj.Isodd(s)<<endl;
    
    // cout<<num<<endl;
    return 0;

}