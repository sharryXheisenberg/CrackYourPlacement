#include <stack>
#include <string>
using namespace std;

bool isValidParenthesis(string s) {
    stack<char> st;
    
    for (char c : s) {
        
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
       
        else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop(); 
            } else {
                return false; 
            }
        }
    }
    
   
    return st.empty();
}

// Example usage:
int main() {
    string s1 = "[()]{}{[()()]()}";
    string s2 = "[[}[";
    
    bool result1 = isValidParenthesis(s1); 
    bool result2 = isValidParenthesis(s2); 
   
    
    return 0;
}
