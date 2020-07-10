public class Solution 
{

    // Complete the isBalanced function below.
    static String isBalanced(String s) 
    {

        Stack<Character> stack = new Stack();
    for(int i=0;i<s.length();i++)
    {
        if(s.charAt(i)=='(' || s.charAt(i)=='{'|| s.charAt(i)=='[')
        {
            stack.push(s.charAt(i));
        }
        else  
        {
             if(stack.isEmpty())
             {
                 return "NO";
             }
             else
             {
                char pop_ele = stack.pop();
                if(s.charAt(i)==')' &&  pop_ele != '(')
                {
                    return "NO";
                }
                else if(s.charAt(i)==']'&& pop_ele!='[')
                {
                  return "NO";                    
                                      
                }
                else if(s.charAt(i)=='}' && pop_ele!='{')
                {
                    return "NO";
                }
                
             }

        }
           
    }
    if(stack.isEmpty())
        {
            return "YES";
        }
        else
        {
            return "NO";
        }

    }
