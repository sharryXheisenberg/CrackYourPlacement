#include <unordered_map>
#include <string>
#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(std::string s) {
        std::unordered_map<char, int> count;
        int n = s.length();
        int left = 0, result = 0;

        for (int right = 0; right < n; ++right) {
            count[s[right]]++;
            
            while (count['a'] > 0 && count['b'] > 0 && count['c'] > 0) {
                result += n - right;
                count[s[left]]--;
                left++;
            }
        }

        return result;
    }
};
int main(){
    Solution obj;
    string s = "abcabc";
    int t = obj.numberOfSubstrings(s);
    cout<<t<<endl;
    return 0;
}

