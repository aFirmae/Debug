import java.util.*;

class ListNode {
    int val;
    ListNode next;
}


public class LinkedList {
    
    ListNode head = null, tail = null;

    public void appendNode(int data) {
        ListNode newNode = new ListNode();
        newNode.val = data;
        newNode.next = null;

        if (head == null) head = tail = newNode;
        else {
            tail.next = newNode;
            tail = newNode;
        }
    }

    public void display() {
        ListNode ptr = head;
        while (ptr != null) {
            System.out.print(ptr.val + " -> ");
            ptr = ptr.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        LinkedList list = new LinkedList();

        int nodes, data;
        System.out.print("Number of nodes: ");
        nodes = sc.nextInt();

        for (int i = 0; i < nodes; i++) {
            System.out.print("Nodes " + (i + 1) + ": ");
            data = sc.nextInt();
            list.appendNode(data);
        }

        list.display();
    }
}