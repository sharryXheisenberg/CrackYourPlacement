#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> map_s_to_t;
        unordered_map<char, char> map_t_to_s;

        for (int i = 0; i < s.length(); ++i) {
            char s_char = s[i];
            char t_char = t[i];

            
            if (map_s_to_t.count(s_char)) {
                if (map_s_to_t[s_char] != t_char) return false;
            } else {
                map_s_to_t[s_char] = t_char;
            }

            
            if (map_t_to_s.count(t_char)) {
                if (map_t_to_s[t_char] != s_char) return false;
            } else {
                map_t_to_s[t_char] = s_char;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";

    cout << "Isomorphic (Test 1): " << (sol.isIsomorphic(s1, t1) ? "true" : "false") << endl; // Output: true
    cout << "Isomorphic (Test 2): " << (sol.isIsomorphic(s2, t2) ? "true" : "false") << endl; // Output: false
    cout << "Isomorphic (Test 3): " << (sol.isIsomorphic(s3, t3) ? "true" : "false") << endl; // Output: true

    return 0;
}
