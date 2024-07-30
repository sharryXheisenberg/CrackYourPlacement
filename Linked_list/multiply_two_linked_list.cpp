#include <iostream>
#include <cmath>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

class Solution {
public:
    long long multiplyTwoLists(Node* first, Node* second) {
        long long num1 = 0, num2 = 0;
        long long MOD = 1e9 + 7;

       
        while (first != nullptr) {
            num1 = (num1 * 10 + first->data) % MOD;
            first = first->next;
        }

        
        while (second != nullptr) {
            num2 = (num2 * 10 + second->data) % MOD;
            second = second->next;
        }

        
        return (num1 * num2) % MOD;
    }
};

int main() {
    // Create first linked list 3->2
    Node* first = new Node(3);
    first->next = new Node(2);

    // Create second linked list 2
    Node* second = new Node(2);

    Solution sol;
    cout << "Output: " << sol.multiplyTwoLists(first, second) << endl;

    // Create first linked list 1->0->0
    Node* first2 = new Node(1);
    first2->next = new Node(0);
    first2->next->next = new Node(0);

    // Create second linked list 1->0
    Node* second2 = new Node(1);
    second2->next = new Node(0);

    cout << "Output: " << sol.multiplyTwoLists(first2, second2) << endl;

    return 0;
}
