/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head = new ListNode(0);
        head=nullptr;
        ListNode* temp=head;
        while(l1 || l2 || carry){
                ListNode* newnode = new ListNode();
                newnode->val=(l1 ? l1->val : 0) + (l2 ? l2->val : 0)+carry;
                newnode->next=nullptr;
                carry=0;
                if(newnode->val>=10){
                    newnode->val=newnode->val%10;
                    carry =1;
                }
                if(!head){
                head=newnode;
                temp=head;
                }
                else{
                   temp->next=newnode;
                   temp=temp->next;
                }
                
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return head;
    }
};

time complexity of the algorithm is O(max(n, m)).
space complexity is O(max(n, m))
*/