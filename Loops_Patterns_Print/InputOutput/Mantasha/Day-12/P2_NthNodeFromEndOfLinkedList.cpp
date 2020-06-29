//Program-2

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
       Node *cur=head;
       int i=0;
       while(cur->next!=NULL)
       {
           cur=cur->next;
           i++;
       }
       int count=i+1-n;
       if(count<0)
       return -1;
       cur=head;
       while(count--)
       {
           cur=cur->next;
       }
       return cur->data;
}
