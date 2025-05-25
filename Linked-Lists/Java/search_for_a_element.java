import javax.swing.*;

class Node3{
    public
    int data;
    Node next;
    public
    Node3(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node3(int data1)
    {
        data=data1;
        next=null;
    }
};
public class search_for_a_element
{
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
    public static int search(Node temp,int val)
    {
        while(temp!=null)
        {
            if(temp.data==val)
                return 1;
            temp=temp.next;
        }
        return 0;
    }
    public static void main(String[] args) {
        int[] arr={15,5,8,7,2,1};
        Node head=convertarraytolist(arr);

        Node temp=head;
        if(search(temp,99)==1)
        System.out.println("Present");
        else
            System.out.println("not present");



    }
}




