#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr) return nullptr;
         
        ListNode* temp = head;
        vector<int> v;
        
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(v.begin(), v.end());
        
        temp = head;
        for (int i = 0; i < v.size(); i++) {
            temp->val = v[i];
            temp = temp->next;
        }
        
        return head;
    }
};


void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    
    Solution sol;
    head = sol.sortList(head);
   
    printList(head);
    

    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
