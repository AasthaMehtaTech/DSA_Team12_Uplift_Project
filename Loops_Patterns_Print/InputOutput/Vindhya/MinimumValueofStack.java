class GfG
{
    int minEle;
    Stack<Integer> s = new Stack<Integer>();
    Stack <Integer>s1 = new Stack<Integer>();
    /*returns min element from stack*/
    int getMin()
    {
	// Your code here
	    
	    if(s1.isEmpty())
	    {
	       return -1;
	    }
	    else
	    {
	         minEle = s1.peek();
	    }
	    return minEle;
    }
    
    /*returns poped element from stack*/
    int pop()
    {
        int del=0;
	 // Your code here
	   if(s.isEmpty())
	   {
	       return -1;
	   }
	   else 
	   {
	       del = s.pop();
	       if(s1.isEmpty())
	       {
	           return -1;
	       }
	       else
	       { 
	           if(del==s1.peek() && !s1.isEmpty()) 
	           {
	               s1.pop();
	           }
	       }
	   }
	   return del;
	    
    }
    
    /*push element x into the stack*/
    void push(int x)
    {
	// Your code here
	   s.push(x);
	   if(s1.isEmpty())
	   {
	       s1.push(x);
	   }
	  else if(x<=s1.peek())
	   {
	      s1.push(x); 
	   }
    }	
}


