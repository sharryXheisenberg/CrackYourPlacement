// Print all the duplicate characters in a string
// Input: S = “geeksforgeeks”
// Output:

// e, count = 4
// g, count = 2
// k, count = 2
// s, count = 2
#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include<string>
using namespace std ;

void printDuplicate(string str){
    unordered_map<char , int>cnt;

    for(int i=0;i<str.length();i++){
        cnt[str[i]]++;
    }
    
    for(auto it:str){
        if(it.second>1)
            cout<<" "<<it.first<<" count"<<it.second<<"\n";
    }
}
int main()
{
    string str = "test string";
    printDuplicate(str);
    return 0;
}