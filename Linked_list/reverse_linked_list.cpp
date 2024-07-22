#include<iostream>
#include<bits\stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; // This will be the new head of the reversed list
        ListNode* current = head; // Pointer to iterate over the original list
        ListNode* next = nullptr; // To store the next node
        
        while (current != nullptr) {
            next = current->next; // Save the next node
            current->next = prev; // Reverse the link
            prev = current;       // Move prev to this node
            current = next;       // Move to the next node in the original list
        }
        
        return prev; // prev will be the new head of the reversed list
    }
};