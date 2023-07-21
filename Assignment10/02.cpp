
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode*temp = head;

        while(temp!=NULL){  
            if(temp->val!=val){
                ListNode *newNode= new ListNode(temp->val);

                if(newHead==NULL){
                    newHead = newNode;
                    newTail = newNode;
                }
                else{
                    newTail->next = newNode;
                    newTail = newNode;
                }
            }
            temp= temp->next;
        }

        return newHead;
    }
};