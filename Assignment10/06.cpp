class Solution {
public:

    int getlen(ListNode*temp){
        
        int count = 0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL){
            return NULL;
        }

        int len = getlen(head);

        if(len == 1){
            return head;
        }
        k = k%len;
        ListNode*temp = head;
        ListNode*prev = NULL;
        while(k!=0){
            temp = head;
            prev = NULL;
            while(temp->next!=NULL){
                prev = temp;
                temp = temp->next;
            }
            temp->next = head;
            prev->next = NULL;
            head = temp;
            k--;
        }
        return head;

    }
};