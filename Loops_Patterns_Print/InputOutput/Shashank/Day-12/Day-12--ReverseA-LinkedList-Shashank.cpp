/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    Node *q,*p,*r;
  r=NULL;
  p=head;
  q=NULL;
  while(p!=NULL){
    r=p->next;
    p->next=q;
    q=p;
    p=r;
    
  }
  return q;
}
