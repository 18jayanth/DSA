import javax.swing.*;

class Node6{
    public
    int data;
    Node next;
    public
    Node6(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node6(int data1)
    {
        data=data1;
        next=null;
    }
};
public class Deleting_element_at_Kthposition

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
    public static  Node remove(Node head,int k)
    {
        if(head==null ) return null;
        if(k==1)
        {
            head=head.next;
            return head;
        }
        int cnt=0;
        Node temp=head;
        Node prev=null;
        while(temp!=null){
            cnt+=1;
            if(cnt==k)
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
        head=remove(head,2);
        print(head);




    }
}





