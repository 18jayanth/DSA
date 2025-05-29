class Solution {
public:
void insertnodes(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        Node* newnode=new Node(temp->val);
        newnode->next=temp->next;
        temp->next=newnode;
        
        temp=temp->next->next;
    }
}
void connectrandom(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        Node* copynode=temp->next;
        if(temp->random)
        copynode->random=temp->random->next;
        else
        copynode->random=NULL;
        temp=temp->next->next;
    }
}
    Node* copyRandomList(Node* head) {
        insertnodes(head);
        connectrandom(head);
        Node* dnode=new Node(-1);
        Node* res=dnode;
        Node* temp=head;
        while(temp!=NULL)
        {
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dnode->next;
        
    }
};
