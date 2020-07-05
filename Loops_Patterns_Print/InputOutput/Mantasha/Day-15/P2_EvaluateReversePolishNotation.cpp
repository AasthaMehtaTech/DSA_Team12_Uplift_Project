class Solution {
public:
    int eval(int a, int b, char c)
    {
        if(c=='+')
            return b+a;
        else if(c=='-')
            return b-a;
        else if(c=='*')
            return b*a;
        else
           return b/a;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i].size()>1 or (tokens[i][0]>='0'&&tokens[i][0]<='9'))
                st.push(stoi(tokens[i]));
            else
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=eval(a,b,tokens[i][0]);
                st.push(c);
            }
        }
        return st.top();  
    }
};
