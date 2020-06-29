//Program-4


/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as
struct node
{
    int data;
    struct node* next;
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/

Node* pairWiseSwap(struct Node* head) {
    Node* p=head;
   while(p!=NULL&&p->next!=NULL)
   {
       swap(p->data,p->next->data);
       p=p->next->next;
   }
   return head;
}
