import javax.swing.*;

class Node7{
    public
    int data;
    Node next;
    public
    Node7(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node7(int data1)
    {
        data=data1;
        next=null;
    }
};
public class Deleting_val_from_LL

{

    public static void print(Node  head)
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");	;
            temp=temp.next;
        }
    }
    public static  Node remove(Node head,int val)
    {
        if(head==null ) return null;
        if(head.data==val)
        {
            head=head.next;
            return head;
        }

        Node temp=head;
        Node prev=null;
        while(temp!=null){

            if(temp.data==val)
            {
                prev.next=prev.next.next;
                break;
            }
            prev=temp;
            temp=temp.next;
        }

        return head;

    }
    public static Node convertarraytolist(int[]  arr)
    {
        Node head=new Node(arr[0]);
        Node mover=head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp=new Node(arr[i]);
            mover.next=temp;
            mover=temp;
        }
        return head;
    }

    public static void main(String[] args) {
        int[] arr={15,5,8,7,2,1};
        Node head=convertarraytolist(arr);
        head=remove(head,8);
        print(head);




    }
}





