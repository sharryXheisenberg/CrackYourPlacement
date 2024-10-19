#include<iostream>
#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;  

        vector<bool> isPrime(n, true);  
        isPrime[0] = isPrime[1] = false;  

        
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;  
                }
            }
        }

        
        int primeCount = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                primeCount++;
            }
        }

        return primeCount;
    }
};

int main(){
    Solution obj;
    int n = obj.countPrimes(10);
    cout<<n<<endl;
    return 0;
}