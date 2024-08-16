#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        if (magazine.length() < ransomNote.length()) return false;

        unordered_map<char, int> charCount;
        for (char ch : magazine) {
            charCount[ch]++;
        }

        for (char ch : ransomNote) {
            if (charCount[ch] > 0) {
                charCount[ch]--;  
            } else {
                return false;  
            }
        }

        return true; 
    }
};
