//LC 237. Delete node in a linked list

class Solution {
public:
    void deleteNode(ListNode* node) {
        
       node->val = node->next->val;
       ListNode *temp = node->next;;
        node->next = temp ->next;
        delete temp;
    }
}; 