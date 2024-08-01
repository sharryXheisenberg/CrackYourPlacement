#include <iostream>
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

int findLength(Node* s, Node* f) {
    int cnt = 1;
    f = f->next;
    while (s != f) {
        cnt++;
        f = f->next;
    }
    return cnt;
}

int lengthofLoop(Node* head) {
    Node* s = head;
    Node* f = head;

    while (f != nullptr && f->next != nullptr) {
        s = s->next;
        f = f->next->next;

        if (s == f) {
            return findLength(s, f);  // Return the length of the loop
        }
    }
    return 0;  // Return 0 if no loop is found
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = second;  // Create a loop

    int loopLength = lengthofLoop(head);
    if (loopLength > 0) {
        cout << "Length of the loop: " << loopLength << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}
