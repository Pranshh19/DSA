class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }

        //Additional Test case probably not required
        if(head->next ==NULL){
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* headEven = head->next;
        while(odd->next!=NULL && even->next!=NULL){
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = odd->next;
            even = odd->next;
        }

        odd->next = headEven;

        return head;

    }
};