//LC 876 Middle of the Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        if(head !=NULL)
        {
            while(fast  && fast->next )
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};