class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp = node;
        ListNode* prev = node;
        while(temp->next!=NULL){
            temp->val = temp->next->val;
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        

    }
};