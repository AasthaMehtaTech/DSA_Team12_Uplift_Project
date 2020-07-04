void QueueStack :: push(int x)
{
        
        q1.push(x);
}

int QueueStack :: pop()
{
       
        int ans= -1;
        if(q1.empty()) return ans;
        q1.push(0);
        while(1)
        {
            int x= q1.front();
            q1.pop();
            if(q1.front()==0)
            {
                ans=x;
                break;
            }
            else 
            {q1.push(x);}
        }
        q1.pop();
        return ans;
}
