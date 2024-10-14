#include<iostream>
#include<bits\stdc++.h>
#include<cstring>

using namespace std;

int main(){
    string s = "LOVELY";
    char c ;
    for(int i=0;i<s.length();i++){
        c = s[i];
        if(isupper(c)){
            s[i] = tolower(c);
        }
        else{
            continue;
        }
    }
    cout<<s<<endl;
    return 0;
}