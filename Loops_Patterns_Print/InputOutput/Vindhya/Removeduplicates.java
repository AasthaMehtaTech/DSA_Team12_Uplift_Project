class GfG
{
    // head: head node
    Node removeDuplicates(Node root)
    {
        Node head=root.next;
        Node prev=root;
        while(head!=null)
        {
             if(prev.data==head.data)
             {
                 prev.next=head.next;
                   head=prev.next;
              }
              else
              {
                     prev=head;
                    head=head.next;
               }
          }
         return root;
    }
}
