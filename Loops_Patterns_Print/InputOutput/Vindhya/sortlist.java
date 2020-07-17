/*
class Node
{
    int data;
    Node next;
    Node(int data)
    {
        this.data = data;
        next = null;
    }
}
*/
class LinkedList
{
    static Node segregate(Node head)
    {
        // add your code here
       int n0=0,n1=0,n2=0;
       Node cur = head;
       while(cur!=null)
       {
           if(cur.data==0)
           {
               n0++;
           }
           else if(cur.data==1)
           {
               n1++;
           }
           else
           {
               n2++;
           }
           cur = cur.next;
       }
       Node temp = head;
       while(n0>0)
       {
          temp.data = 0;
          temp = temp.next;
          n0--;
       }
       while(n1>0)
       {
           temp.data=1;
           temp = temp.next;
           n1--;
       }
       while(n2>0)
       {
           temp.data=2;
           temp = temp.next;
           n2--;
       }
       return head;
    }
}


