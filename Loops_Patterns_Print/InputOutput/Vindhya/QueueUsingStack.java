import java.io.*;
import java.util.*;
class Queue
{
    Stack<Integer> s1,s2;
   public Queue()
   {
        s1 = new Stack<Integer>();
        s2 = new Stack<Integer>();
   } 
    public  void Endueue(int ele)
    {
        s1.push(ele);
    }
    public void Dequeue()
    {
        if(s2.isEmpty())
        {
            while(!s1.isEmpty())
            {
                s2.push(s1.pop());
            }
            
        }
        s2.pop();
       
    }
 void display()
   {
         if(s2.isEmpty())
         {
                 while(!s1.isEmpty())
                 {
                     s2.push(s1.pop());
                 }
         }
        System.out.println(s2.peek());
   }

}
public class Solution {

 public static void main(String[] args)
     {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
      Scanner sc = new Scanner(System.in);
        Queue q = new Queue();
       // System.out.println("Enter number of querries");
        int n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
          //   System.out.println("Enter your choice");
        int choice = sc.nextInt();
           switch(choice)
           {
           case 1:  q.Endueue(sc.nextInt());
                    break;
           case 2: q.Dequeue();
                   break;
           case 3: q.display(); 
                    break;
                   
                    
           }
        }


    }
}
