class Node {
    int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
}



class ReverseLL
{
    // This function should reverse linked list and return
    // head of the modified linked list.
    Node reverseList(Node head)
    {
      Node current = head;
    Node prev = null;

    while(current!=null)
    {
    head = current.next;
        current.next = prev;
    prev = current;
    current = head;
    }
        return prev;
    }
}
/**********Second approach********************/
class Node {
    int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
}



class ReverseLL
{
    // This function should reverse linked list and return
    // head of the modified linked list.
    Node reverseList(Node head)
    {
      Node current = head;
    Node prev = null;
     Node nextnode = head;
    while(nextnode!=null)
    {
        nextnode = nextnode.next;
        current.next = prev;
        prev = current;
        current = nextnode;
    }
        return prev;
    }
}
