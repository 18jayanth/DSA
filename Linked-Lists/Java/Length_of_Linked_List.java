
class Node2{
    public
    int data;
    Node next;
    public
    Node2(int data1,Node next1)
    {
        data=data1;
        next=next1;
    }
    public
    Node2(int data1)
    {
        data=data1;
        next=null;
    }
};
public class Length_of_Linked_List
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
    public static int length(Node temp)
    {  int cnt=0;
        while(temp!=null)
        {
            cnt+=1;
            temp=temp.next;
        }
        return cnt;
    }
    public static void main(String[] args) {
        int[] arr={15,5,8,7,2,1};
        Node head=convertarraytolist(arr);

        Node temp=head;
        System.out.println(length(temp));

    }
}



