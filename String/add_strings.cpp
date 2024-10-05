#include <iostream>
#include <algorithm>
using namespace std;

string stringSum(string num1, string num2) {
    if (num1.length() < num2.length()) {
        swap(num1, num2);
    }

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result = "";
    int carry = 0;

    for (int i = 0; i < num1.length(); i++) {
        int digit1 = num1[i] - '0'; 
        int digit2 = (i < num2.length()) ? num2[i] - '0' : 0; /

        int sum = digit1 + digit2 + carry; 
        result += (sum % 10) + '0'; 
        carry = sum / 10; 
    }

    if (carry) {
        result += carry + '0';
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        string num1, num2;
        cin >> num1 >> num2; 
        cout << stringSum(num1, num2) << endl;
    }
    return 0;
}
