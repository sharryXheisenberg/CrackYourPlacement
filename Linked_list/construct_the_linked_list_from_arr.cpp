// Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.

// Construct the linked list from arr and return the head of the linked list.

#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

class Solution {
public:
    Node* constructLL(vector<int>& arr) {
        if (arr.empty()) return nullptr;

        Node* head = new Node(arr[0]);
        Node* current = head;
        
        for (size_t i = 1; i < arr.size(); ++i) {
            current->next = new Node(arr[i]);
            current = current->next;
        }
        
        return head;
    }
};

// Example usage:
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Solution solution;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    Node* head1 = solution.constructLL(arr1);
    printList(head1);  // Output: 1 2 3 4 5

    vector<int> arr2 = {2, 4};
    Node* head2 = solution.constructLL(arr2);
    printList(head2);  // Output: 2 4

    return 0;
}
