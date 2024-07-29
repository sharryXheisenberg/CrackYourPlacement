#include <iostream>
#include <unordered_map>

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

bool detectLoop(Node* head) {
    Node* temp = head;
    unordered_map<Node*, int> listmap;

    while (temp != nullptr) {
        if (listmap.find(temp) != listmap.end()) {
            return true;
        }
        listmap[temp] = 1;
        temp = temp->next;
    }
    return false;
}

int main() {
    // Create a sample linked list with a loop for testing
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // Create a loop
    fifth->next = third;

    bool isPresent = detectLoop(head);

    // Check if there is a loop in the linked list
    if (isPresent) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    fifth->next = nullptr;
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
