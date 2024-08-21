#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

class Sol {
    public:
     int characterReplacement(string s, int k) {
     int max_count = 0;
     int max_len = 0;

    vector<int>count(26,0);

    int l = 0;
    for(int r=0;r<s.length() ; r++){
        count[s[r]-'A']++;
        max_count = max(max_count , count[s[r]-'A']);
    

    if(r-l+1 - max_count>k){
        count[s[l]-'A']--;
        l++;
    }

    max_len = max(max_len , r-l+1);
    }
    return max_len;
    }
};

int main(){
    Sol sol;
    string s = "AABABBA";
    int k = 1;
    
    int result = sol.characterReplacement(s, k);
    cout << "The length of the longest substring after replacing at most " << k << " characters is: " << result << endl;
}