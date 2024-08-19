#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seenNumbers;
        
        while (n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
            seenNumbers.insert(n);
            n = getNext(n);
        }
        
        return n == 1;
    }

private:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }
};

int main() {
    Solution obj;
    int n = 19;
    if (obj.isHappy(n)) {
        std::cout << n << " is a happy number." << std::endl;
    } else {
        std::cout << n << " is not a happy number." << std::endl;
    }
    return 0;
}
