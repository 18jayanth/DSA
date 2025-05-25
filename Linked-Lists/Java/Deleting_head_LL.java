import javax.swing.*;

class Node4{
    public
    int data;
    Node next;
    public
    Node4(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node4(int data1)
    {
        data=data1;
        next=null;
    }
};
public class Deleting_head_LL

{

    public static void print(Node  head)
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.println(temp.data);	;
            temp=temp.next;
        }
    }
   public static  Node remove(Node head)
{
    Node temp;
    if(head==null) return head;
    temp=head;
    head=head.next;
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
        head=remove(head);
        print(head);




    }
}




