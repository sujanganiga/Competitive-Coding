/*
class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        struct Node* temp=head;
        struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
        new_node->data=data;
        if(head->data>data){
            new_node->next=head;
            head=new_node;
        }
        else{
        while(temp->next&&((temp->next->data)<data)){
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        
        }
        return head;
        // Code here
    }
};
time complexity:O(n);
space complexity:O(1);

*/