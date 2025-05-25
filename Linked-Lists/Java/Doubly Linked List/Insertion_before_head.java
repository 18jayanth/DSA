
public class Insertion_before_head{


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
    public static Node insertion(Node head,int val)
    {
        Node newnode=new Node(val,head,null);
        head.prev=newnode;
        return newnode;
    }

    public static void main(String[] args) {
        int[] arr={15,5,8,7};
        Node  head=convertarraytodblist(arr);
        head=insertion(head,30);
        print(head);


    }



}

