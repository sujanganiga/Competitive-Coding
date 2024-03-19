/*
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
       
        unordered_map<int, int> mp;
        Node *p = head1;
        
        while(p) {
            mp[p->data]++;
            p = p->next;
        }
        
        p = head2;
        int count = 0;
        
        while(p) {
            if(mp.count(x - p->data))
                count++;
            
            p = p->next;
        } 
        
        return count;
        // Code here
    }
};


*/