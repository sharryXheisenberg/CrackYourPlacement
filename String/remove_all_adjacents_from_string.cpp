#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for (char ch : s) {
            if (!st.empty() && st.top() == ch) {
                st.pop(); 
            } else {
                st.push(ch);
            }
        }
        
        string result = "";
        while (!st.empty()) {
            result = st.top() + result; 
            st.pop();
        }
        
        return result;
    }
};

int main() {
    Solution obj;
    string s1 = "abbaca";
    string s2 = "azxxzy";
    
    cout << "Result for \"" << s1 << "\": " << obj.removeDuplicates(s1) << endl; 
    cout << "Result for \"" << s2 << "\": " << obj.removeDuplicates(s2) << endl;
    
    return 0;
}
