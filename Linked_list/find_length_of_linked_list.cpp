#include <iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next ;

    public:
    Node (int data1 , Node* next1){
        data = data1 ;
        next = next1 ;
    }

    public:
    Node ( int data1){
        data = data1;
        next = nullptr;
    }
};
    

 int lengthOfLinkedlist(Node* head){
    int cnt = 0 ;
    Node* temp = head;

    while(temp!=nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
 }

 int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    // Create a linked list
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    // Print the length of the linked list
    cout << lengthOfLinkedlist(head) << '\n';
}