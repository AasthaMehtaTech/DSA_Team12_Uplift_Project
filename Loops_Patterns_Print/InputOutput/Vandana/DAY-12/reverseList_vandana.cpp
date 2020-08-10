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
    if(head!=NULL){
    Node *prev = head;
    Node *curr = head->next;
    head = head->next;
    prev->next = NULL;
    while(head!=NULL){
        head = head->next;
        curr->next = prev;
        prev = curr;
        curr = head;
    }
    head = prev;
    }
    return head;
}
