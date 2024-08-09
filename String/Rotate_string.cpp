#include <iostream>
#include <string>
using namespace std;

class Rt {
public:
    bool rotateString(string s, string r) {
        if (s.length() != r.length()) {
            return false;
        }

        string doubled_s = s + s;

        if (doubled_s.find(r) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Rt obj;
    string s = "abcde";
    string r = "cdeab";
    cout << obj.rotateString(s, r) << endl;  
    return 0;
}
