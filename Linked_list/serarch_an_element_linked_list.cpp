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

    static bool checkisPresent(Node* head, int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int val = 3;
    bool isPresent = Node::checkisPresent(head, val);
    
    if (isPresent) {
        cout << "Value " << val << " is present in the linked list." << endl;
    } else {
        cout << "Value " << val << " is not present in the linked list." << endl;
    }

    return 0;
}
