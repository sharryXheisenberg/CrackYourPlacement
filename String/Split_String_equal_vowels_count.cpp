// Problem statement
// You are given a string ‘str’ of even length. Your task is to find out if we divide the ‘str’ from the middle, will both the substrings contain an equal number of vowels or not.

// For Example:
// You are given, ‘str’= ‘codingninjas’, when we split this string we get, ‘coding’ and ‘ninjas’ which both contain 2 vowels each. Hence the answer is ‘True’.

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool splitString(string &str) {
    int n = str.length();
    int mid = n / 2;
    int cnt_first = 0;
    int cnt_second = 0;
    
    for (int i = 0; i < mid; i++) {
        if (isVowel(str[i])) cnt_first++;
    }
    
    for (int i = mid; i < n; i++) {
        if (isVowel(str[i])) cnt_second++;
    }
    
    return cnt_first == cnt_second;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        cout << (splitString(str) ? "True" : "False") << endl;
    }
    return 0;
}