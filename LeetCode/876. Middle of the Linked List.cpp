
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }
};


/*

Time Complexity: O(n) (linear time complexity)
Space Complexity: O(1) (constant space complexity)

Space Complexity:
The algorithm uses only two pointers (fast and slow) to traverse the linked list. These pointers require constant space regardless of the size of the linked list. Therefore, the space complexity is O(1), which indicates constant space complexity.

*/