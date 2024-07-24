#include<iostream>
#include<bits\stdc++.h>

using namespace std;

class Node{
    int data;
    Node* next;

    Node*(int data1 , Node* next1){
        data = data1 ;
        next = next1;
    }

    Node*(int data1){
        data = data1;
        next = nullptr;   // intially null linked list
    }

    void print(Node* head) {
        while(head->next!=nullptr){
            
            cout<<head->data <<" ";
            head = head -> next ;

        }
    }
    Node* insrertNode(Node* head , int val){
        Node* temp = new Node(val , head);
        return temp ;
    }
}

int main() {
    // Sample array and value for insertion
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    // Creating a linked list with initial elements from the array
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    // Inserting a new node at the head of the linked list
    head = insrertNode(head, val);

    // Printing the linked list
    print(head);

    return 0;
}
Output: