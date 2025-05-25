import javax.swing.*;

class Node11{
    public
    int data;
    Node next;
    public
    Node11(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node11(int data1)
    {
        data=data1;
        next=null;
    }
};
public class Insertion_at_head_of_LL

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
    public static  Node insert(Node head,int val)
    {
       Node temp=new Node(val,head);
       return temp;

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
        head=insert(head,50);
        print(head);




    }
}






