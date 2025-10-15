class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode=new ListNode(-1);
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* curr=dummynode;
        int carry=0;
        int sum;
        while(t1 || t2)
        {
            sum=carry;
            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;
            ListNode* newnode=new ListNode(sum%10);
            carry=sum/10;
            curr->next=newnode;
            curr=curr->next;
            if(t1) t1=t1->next;
            if(t2) t2=t2->next;

        }
        if(carry)
        {
            ListNode* newnode=new ListNode(carry);
            curr->next=newnode;

        }
        return dummynode->next;
        
    }
};
