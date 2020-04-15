LC 1290. Convert Binary Number in a Linked List to Integer  

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(!head) return 0;
        if(!head->next) return head->val;
        int n = 0, m = 0; vector<int> v;
        while(head){
            m++;
            v.push_back(head->val);
            head = head->next;
        }
        for(int i = 0; i < v.size(); i++){
            m--;
            if(v[i] == 1)    n += pow(2, m);   
        }
        return n;
    }
};