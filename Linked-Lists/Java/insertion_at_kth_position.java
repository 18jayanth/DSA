import javax.swing.*;

class Node10 {
    public
    int data;
    Node next;

    public Node10(int data1, Node next1) {
        data = data1;
        next = next1;
    }

    public Node10(int data1) {
        data = data1;
        next = null;
    }
};

public class insertion_at_kth_position {

    public static void print(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            ;
            temp = temp.next;
        }
    }

    public static Node insert(Node head, int val, int k) {

        {
            if (head == null) {
                if (k == 1)

                    return new Node(val);
                else return null;
            }
            if (k == 1) {

                Node temp = new Node(val, head);

                return temp;
            }
            int cnt = 0;
            Node temp = head;
            while (temp != null) {
                cnt++;
                if (cnt == k - 1) {
                    Node x = new Node(val);
                    x.next = temp.next;
                    temp.next = x;
                    break;
                }
                temp = temp.next;
            }


            return head;

        }

    }

    public static Node convertarraytolist(int[] arr) {
        Node head = new Node(arr[0]);
        Node mover = head;
        for (int i = 1; i < arr.length; i++) {
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }
        return head;
    }

    public static void main(String[] args) {
        int[] arr = {15, 5, 8, 7, 2, 1};
        Node head = convertarraytolist(arr);
        head = insert(head, 50, 3);
        print(head);


    }
}






