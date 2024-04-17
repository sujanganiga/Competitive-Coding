/*
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node * merge;
    if(head1->data<head2->data){
        merge=head1;
        head1=head1->next;
    }
    else{
        merge=head2;
        head2=head2->next;
    }
    Node * temp=merge;
    while(head1&&head2){
        if(head1->data<head2->data){
            temp->next=head1;
            head1=head1->next;
        }
        else{
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
    }
    if(head1){
        temp->next=head1;
    }
    else{
        temp->next=head2;
    }
    
    return merge;
}  */