#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "abcd";
    string t = "abcde";
    
    unordered_map<char, int> count;
    
    for (char c : t) {
        count[c]++;
    }

    for (char c : s) {
        count[c]--;
    }
    

    for (auto& pair : count) {
        if (pair.second == 1) {
            cout << "The extra character is: " << pair.first << endl;
            break;
        }
    }
    
    return 0;
}
