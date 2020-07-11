import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Queues
{
	Queue<Integer> q1 = new LinkedList<>();
	Queue<Integer> q2 = new LinkedList<>();
	void push(int val)
	{
			
		q1.add(val);
		System.out.println(q1);
	}
	int pop()
	{
		if(q1.isEmpty())
		{
			return -1;
		}
			
		while(q1.size()!=1)
		{
			q2.add(q1.remove());
		}
		int val = q1.remove();
		Queue<Integer> temp = q1;
		q1 = q2;
		q2 = temp;
		return val;
			
	}
}
public class Stack {

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		//System.out.println("Enter the number of test cases");
		int n = sc.nextInt();
		Queues q = new Queues();
		for(int i=0;i<n;i++)
		{
		
		//System.out.println("Enter the choice");
		int ch = sc.nextInt();
		switch(ch)
		{
		case 1: q.push(sc.nextInt());
			    break;
		case 2:System.out.println(q.pop());
			   break;
			    
		}
	  }
		

	}

}
