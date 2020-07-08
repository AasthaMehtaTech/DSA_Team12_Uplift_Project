Node *sortedInsert(struct Node *head, int x)
{
    struct Node* current = head;
    struct Node* new_Node = new Node(x);
    
    // Case 1 of the above algo
    if (current == NULL)
    {
      new_Node->next = new_Node;
      return new_Node;
    }
    
    // Case 2 of the above algo
    else if (current->data >= new_Node->data)
    {
        /* If value is smaller than head's value then
        we need to change next of last Node */
        while(current->next != head)
            current = current->next;
        
        current->next = new_Node;
        new_Node->next = head;
        return new_Node;
    }
    
    // Case 3 of the above algo
    else
    {
        /* Locate the Node before the point of insertion */
        while (current->next!= head &&
            current->next->data < new_Node->data)
        current = current->next;
        
        new_Node->next = current->next;
        current->next = new_Node;
        return head;
    }
}
