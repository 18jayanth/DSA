Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==k){
        if(temp==head)
        {
            head=head->next;
        }
        Node* nextnode=temp->next;
        Node* prevnode=temp->prev;
        if(nextnode) nextnode->prev=prevnode;
        if(prevnode) prevnode->next=nextnode;
        free(temp);
        temp=nextnode;
    }
    else{
        temp=temp->next;
    }

    }
    return head;
}
