class Node {

    int data;
    Node next;

    Node(int data1, Node next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = null;
    }

};


public class Introduction_to_Linked_List {
    public static void main(String[] args) {


        int[] arr = {1, 2, 3, 4, 5};
        Node y = new Node(arr[1]);
        System.out.println(y.data);
    }
}
