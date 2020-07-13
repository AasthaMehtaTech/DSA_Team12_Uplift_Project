class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}


class GfG
{
    // Function to find the nth node from end in the linked list
    // head: head of the linked list
    // n: nth node from end to find
    int getNthFromLast(Node head, int n)
    {
       Node p = head, f = head;
        for(int i=1; i<=n-1; i++){
            f = f.next;
            if(f == null) return -1;
        }
        while(f.next != null){
            p = p.next;
            f = f.next;
        }
        return p.data;
    }
}
