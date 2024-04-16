/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head; 
        ListNode* ptr=dummy;
        ListNode* temp=dummy;
        while(n>0){
            temp=temp->next;
            n--;
        }
        while(temp->next){
            ptr=ptr->next;
            temp=temp->next;
        }
        ptr->next=ptr->next->next;
        return  dummy->next;

    }
};
time complexity O(L);
space complexity o(1);
*/