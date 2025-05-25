
public class Insertion_before_k {


    static class Node{
        int data;
        Node next;
        Node prev;

        Node(int data1,Node next1,Node prev1)
        {
            data=data1;
            next=next1;
            prev=prev1;
        }

        Node(int data1)
        {
            data=data1;
            next=null;
            prev=null;
        }
    };
    public static Node convertarraytodblist(int[] arr)
    {
        Node head=new Node(arr[0]);
        Node prev=head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp=new Node(arr[i],null,prev);
            prev.next=temp;
            prev=temp;
        }
        return head;
    }
    public static void print(Node head)
    {
        while(head!=null)
        {
            System.out.print(head.data+" ");
            head=head.next;
        }
    }
    public static Node inserthead(Node head, int val)
    {
        Node newnode=new Node(val,head,null);
        head.prev=newnode;
        return newnode;
    }


    public static Node insert(Node head,int val,int k)

    {
        if(k==1)
            return inserthead(head,val);
        Node temp=head;
        int cnt=0;
        while(temp!=null)
        {
            cnt+=1;
            if(cnt==k)
                break;
            temp=temp.next;
        }
        Node previous=temp.prev;
        Node newnode=new Node(val,temp,previous);
        previous.next=newnode;
        temp.prev=newnode;


        return head;


    }


    public static void main(String[] args) {
        int[] arr={15,5,8,7};
        Node  head=convertarraytodblist(arr);
        head=insert(head,30,2);
        print(head);


    }



}



