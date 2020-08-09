/*struct node
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
