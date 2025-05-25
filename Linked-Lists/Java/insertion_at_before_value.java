
import javax.swing.*;

class Node12 {
    public
    int data;
    Node next;

    public Node12(int data1, Node next1) {
        data = data1;
        next = next1;
    }

    public Node12(int data1) {
        data = data1;
        next = null;
    }
};

public class insertion_at_before_value {

    public static void print(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            ;
            temp = temp.next;
        }
    }

    public static Node insert(Node head, int el, int val) {
        if (head == null)
            return null;

        if (head.data == val)
            return new Node(el, head);

        Node temp = head;
        boolean found = false;
        while (temp.next != null) {
            if (temp.next.data == val) {
                Node x = new Node(el, temp.next);
                temp.next = x;
                break;
            }
            temp = temp.next;
        }
        if (found == false)
            System.out.println("We cant find the element");
        return head;
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
        head = insert(head, 50, 8);
        print(head);


    }
}







