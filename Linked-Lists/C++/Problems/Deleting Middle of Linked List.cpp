class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
       ListNode* slow=head;
       ListNode* fast=head;
       int steps=0;
       while(fast!=NULL && fast->next!=NULL) 
       {
        steps++;
        if(steps>1)
        {
           slow=slow->next;
        }
        fast=fast->next->next;
       }
       
       slow->next=slow->next->next;
       
       return head;

    }
};
