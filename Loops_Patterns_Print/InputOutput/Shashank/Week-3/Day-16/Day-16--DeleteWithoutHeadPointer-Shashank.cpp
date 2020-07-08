void deleteNode(Node *node)
{
	if(!node->next)
		return;
		// if this the last node of list, it cannot be deleted
	
	Node* del = node->next;
	// next node will be freed
	
	node->data = del->data;
	// copying data of next node
	
	node->next = del->next;
	// bypassing the next node
	
	free(del);
	// freeing memory
}
