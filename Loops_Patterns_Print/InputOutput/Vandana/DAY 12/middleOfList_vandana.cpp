/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
  Node *p = head;
  Node *q = head;
  while(q && q->next){
      q = q->next->next;
      p = p->next;
  }

 return p->data;
}
