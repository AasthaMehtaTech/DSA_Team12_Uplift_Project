

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
  Node *p = head;
  int i=0;
  while(p!=NULL){
      p=p->next;
      i++;
    }
  int c = i-n;
  if(c<0)
  return -1;
  p = head;
  while(c--){
      p = p->next;
  }
  return p->data;
}

