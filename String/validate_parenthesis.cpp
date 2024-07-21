#include <stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> s1;
        for(int i=0;i<s.length();i++)
        {

            if(s1.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}'))
            {
                return false;
            }
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1.push(s[i]);
                continue;
            }
            else
            {
                char t = s1.top();
                if(!((s[i] == ')' && t == '(') || (s[i] == '}' && t == '{') || (s[i] == ']' && t == '[')))
                {
                    return false;
                }
                else
                {
                    s1.pop();
                }
            }
        }

        if(s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};