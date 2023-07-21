class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        while(list1!=NULL && list2!=NULL){
            ListNode* newNode = new ListNode(0);
            if(list1->val==list2->val){
                newNode->val = list1->val;
                list1 = list1->next;
            }
            else if(list1->val>list2->val){
                newNode->val = list2->val;
                list2 = list2->next;
            }
            else{
                newNode->val = list1->val;
                list1= list1->next;
            }

            //setting for new list
            if(newHead==NULL){
                newHead = newNode;
                newTail = newNode;
            }
            else{
                newTail->next = newNode;
                newTail = newNode;
            }
        }

        while(list1!=NULL){
            ListNode* newNode = new ListNode(list1->val);
              if(newHead==NULL){
                newHead = newNode;
                newTail = newNode;
            }
            else{
                newTail->next = newNode;
                newTail = newNode;
            }
            list1= list1->next;
        }

        
        while(list2!=NULL){
             ListNode* newNode = new ListNode(list2->val);
              if(newHead==NULL){
                newHead = newNode;
                newTail = newNode;
            }
            else{
                newTail->next = newNode;
                newTail = newNode;
            }
            list2= list2->next;
        }

        return newHead;
    }
};