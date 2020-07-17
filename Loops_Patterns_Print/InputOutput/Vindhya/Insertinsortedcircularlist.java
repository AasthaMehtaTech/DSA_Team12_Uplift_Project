/*Complete the function below
Node is as follows:
class Node{
	int data;
	Node next;
	Node(int d){
		data=d;
		next=null;
	}
}*/
class GfG
{
	public static void insert(Node zhead,int value,int n)
         {
             Node newnode = new Node(value);
             Node temp = zhead;
             if(zhead==null)
             {
                 newnode.next = zhead;
                 zhead = newnode;
             }
              /* If value is smaller than head's value then 
             we need to change next of last node */
             else if(newnode.data<=zhead.data)
             {
                 while(temp.next!=zhead)
                 {
                     temp = temp.next;
                 }
                 temp.next = newnode;
                 newnode.next= zhead;
                 zhead = newnode;
             }
             else
             {
                /* Locate the node before the point of insertion */
                while (temp.next != zhead && temp.next.data < newnode.data) 
                   {
                       temp = temp.next; 
                   }
                    newnode.next = temp.next; 
                    temp.next = newnode; 
               
             }
             temp = zhead;
            while(temp.next != zhead)
            {
               System.out.print(temp.data+" ");
                 temp = temp.next;
             }
          System.out.print(temp.data);
       
}
           
         
         
       
}
