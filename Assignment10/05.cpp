
class Solution {
public:

    int getlen(ListNode *temp){
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = getlen(head);
        
        if(n>len){
            return head;
        }

        if(head == NULL){
            return NULL;
        }

        if(len == 1){
            return NULL;
        }

        if(len == n){
            return head = head->next;
        }

        cout<<len<<": Length"<<endl;
        ListNode*temp = head;
        ListNode*prev = NULL;
        int count = 0;
        while(count<(len-n)){
            prev = temp;
            // if(temp!=NULL)
            temp = temp->next;
            count++;
            cout<<"count: "<<count;
        }
        if(prev!=NULL){
            if(temp!=NULL){
                  prev->next= temp->next;
            }
            else{
                  prev->next= NULL;
            }
        }
      
        // if(temp!=NULL){
        //     prev->next = temp->next;
        //     delete temp;
        //     return head;
        // }
        
        return head;
    }
};