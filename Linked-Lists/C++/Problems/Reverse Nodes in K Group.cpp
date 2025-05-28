class Solution {
public:
 ListNode* reverse(ListNode*head)
{
	ListNode* temp=head;
	ListNode* prev=NULL;
	while(temp!=NULL)
	{
		ListNode* front=temp->next;
		temp->next=prev;
		prev=temp;
		temp=front;
	}
	return prev;
}
    ListNode* findkthnode(ListNode* temp,int k)
    {
        k-=1;
        while(temp!=NULL && k>0)
        {
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* nextnode;
        ListNode* prevnode=NULL;
        while(temp!=NULL)
        {
            ListNode* kthnode=findkthnode(temp,k);
        
        if(kthnode==NULL)
        {
            if(prevnode) 
            prevnode->next=temp;
            break;
        }
        nextnode=kthnode->next;
        kthnode->next=NULL;
        reverse(temp);
        if(temp==head) head=kthnode;
        else
        prevnode->next=kthnode;
        prevnode=temp;
        temp=nextnode;
        }
        return head;
        
    }
};
