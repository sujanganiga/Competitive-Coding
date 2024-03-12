/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //ListNode* prev=head;
        
        ListNode* temp=head;
       while (temp && temp->val == val) {
            head = temp->next;
            temp = head;
        }
        // Iterate through the list to remove nodes with the given value
        while (temp && temp->next) {
            if (temp->next->val == val) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
        
    }
};*/

/*
tc:O(n)
sp:O(1)
*/