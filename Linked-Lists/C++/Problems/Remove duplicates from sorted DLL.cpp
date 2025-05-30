class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            Node* nextnode=temp->next;
            while(nextnode!=NULL && nextnode->data==temp->data)
            {
                Node* duplicate=nextnode;
                nextnode=nextnode->next;
                free(duplicate);
            }
            temp->next=nextnode;
            if(nextnode) nextnode->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};
