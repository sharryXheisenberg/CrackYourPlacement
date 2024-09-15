#include<iostream>
using namespace std;

class Prime {
    public:

    void isPrime(int n) {
        if (n <= 1) {
            cout << "Given number is not a prime number" << endl;
            return;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                cout << "Given number is not a prime number" << endl;
                return;
            }
        }
        cout << "Prime number" << endl;
    }
};

int main () {
    Prime obj;
    int n = 3;
    obj.isPrime(n);
    return 0;
}
