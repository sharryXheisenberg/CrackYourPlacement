#include<iostream>
#include<bits\stdc++.h>
#include<stack>

using namespace std;

class Sol{
    public:
    int minimizedStringLength(string s) {
        stack<char>st;
        for(char ch:s){
            if(!st.empty() && st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }

        return st.size();
    }
};

int main() {
    Sol obj;

    string s1 = "baadccab";
    cout << "Minimized length of \"" << s1 << "\" is: " << obj.minimizedStringLength(s1) << endl; 
    
    string s2 = "aaabc";
    cout << "Minimized length of \"" << s2 << "\" is: " << obj.minimizedStringLength(s2) << endl;  
    
    string s3 = "cbbd";
    cout << "Minimized length of \"" << s3 << "\" is: " << obj.minimizedStringLength(s3) << endl;  
    return 0;
}