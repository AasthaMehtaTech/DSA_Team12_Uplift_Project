/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
*/

class Solution
{
    int getMiddle(Node head)
    {
         Node p = head;
         Node q = head;
         if(head==null)
         {
             return -1;
         }
         while(q!=null &&  q.next!=null)
         {
             p = p.next;
             q = q.next.next;
         }
         return p.data;
    }
}
