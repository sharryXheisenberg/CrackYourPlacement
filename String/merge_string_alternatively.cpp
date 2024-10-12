#include<iostream>
#include<bits\stdc++.h>
#include<string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        
        while (i < word1.length() && j < word2.length()) {
            result += word1[i++];
            result += word2[j++];
        }
        
        while (i < word1.length()) {
            result += word1[i++];
        }
        
        while (j < word2.length()) {
            result += word2[j++];
        }
        
        return result;
    }
};


int main(){

    string s1 = "abc";
    string s2 = "pqr";
    Solution obj;
    string n = obj.mergeAlternately(s1,s2);
    cout<<n<<endl;
    return 0;

}