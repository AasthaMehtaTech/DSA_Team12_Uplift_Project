class GfG
{
    void deleteNode(Node node)
    {
         // Your code here
         
         Node del = node.next;
         node.data = del.data;
         node.next = del.next;
         del =null;
    }
}
