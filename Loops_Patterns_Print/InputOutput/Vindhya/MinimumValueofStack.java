class MinStack {
    Stack <Integer>stack,minStack;

    /** initialize your data structure here. */
    public MinStack() 
    {
          stack = new Stack();
        minStack = new Stack();
    }
    
    public void push(int x)
    {
         stack.push(x);
        if (minStack.empty())
        {  
            minStack.push(x);
        }
        else if (minStack.peek() >= x)
        {
            minStack.push(x);
        }    
    }
    
    public void pop() {
        int popEle = stack.pop();
        if(popEle == minStack.peek() && !minStack.isEmpty())
        {
            minStack.pop();
        }
        
    }
    
    public int top() 
    {
        return stack.peek();
    }
    
    public int getMin() {
        return minStack.peek();
        
    }
}
