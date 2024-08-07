#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == ')') {
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
            }
            if (!st.empty()) {
                st.pop();
            }
            if (!hasOperator) {
                return true;
            }
        } else {
            st.push(ch);
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (findRedundantBrackets(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
