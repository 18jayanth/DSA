
public class array_to_linkedlist {


    static class Node{
        int data;
        Node next;

        Node(int data1,Node next1)
        {
            data=data1;
            next=next1;
        }

        Node(int data1)
        {
            data=data1;
            next=null;
        }
    };
    public static Node convertarraytolist(int[] arr)
    {
        Node head=new Node(arr[0]);
        Node mover=head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp=new Node(arr[i]);
            mover.next=temp.next;
            mover=temp;
        }
        return head;
    }

    public static void main(String[] args) {
        int[] arr={15,5,8,7};
        Node y=new Node(arr[0]);
        System.out.println(y.data);
        Node  head=convertarraytolist(arr);
        System.out.println(head.data);

    }



}
