class Node{
    public:
    string data;
    Node* next;
    Node* back;
    Node():data(0),next(nullptr),back(nullptr){};
    Node(string x):data(x),next(nullptr),back(nullptr){};
    Node(string x,Node* next,Node* random):data(x),next(next),back(random){};
 };

class Browser
{
    public:
     Node* current;
    Browser(string &homepage)
    {
        // Write you code here
         current=new Node(homepage);
    }

    void visit(string &url)
    {
        // Write you code here
        Node* newnode=new Node(url);
        current->next=newnode;
        newnode->back=current;
        current=newnode;
    }

    string back(int steps)
    {
        // Write you code here
        while(steps)
        {
            if(current->back)
            {
                current=current->back;
                steps--;
                }
            else break;
            }
        return current->data;
    }

   
string forward(int steps)
    {
        // Write you code here
         while(steps)
        {
            if(current->next)
            {
                current=current->next;
                 steps--;
        
            }
            else break;
           
        }
        return current->data;
    }
};
