#include <iostream>
#include <stack> // Include stack library
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d1, Node* nxt = nullptr) {
        data = d1;
        next = nxt;
    }
};

bool isPalindrome(Node* head) {
    stack<int> st;

    Node* temp = head;

    while (temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != nullptr) { /
        if (temp->data != st.top()) {
            return false;
        }
        st.pop();
        temp = temp->next;
    }
    return true;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLinkedList(head);

    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
