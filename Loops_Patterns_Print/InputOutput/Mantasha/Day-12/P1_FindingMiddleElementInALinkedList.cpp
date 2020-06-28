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
   int mid,n=0,c=1;
   Node *p=head;
   while(p!=NULL)
   {
       n++;
       p=p->next;
   }
   mid=n/2+1;
   while(c<mid){
       c++;
       head=head->next;
   }
   return head->data;
}
