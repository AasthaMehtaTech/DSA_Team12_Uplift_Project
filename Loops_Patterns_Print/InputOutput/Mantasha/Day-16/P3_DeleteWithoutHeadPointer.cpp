void deleteNode(Node *node)
{
   Node *t = node->next;
   node->data = t->data;
  node->next = t->next;
}
