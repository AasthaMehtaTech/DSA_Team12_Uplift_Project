#include <string>
#include <ios>
#include <iostream>
#include "algorithm"
#include <stack>
using namespace std;

string isBal(string pat, int n)
{
    string bal = "balanced", notbal = "not balanced";
    if(n%2)
    return notbal;
    stack<char> st;
      for(char ch: pat)
       {
        if( ch =='{' || ch == '[' || ch == '(')
        st.push(ch);
        else
        {
            if(st.empty())
            return notbal;
            
            
            int diff = ch - st.top();
            if(diff>0 && diff<3) // ascii diff for {} () [] is 2 at most
            {
            st.pop();    
            }
            else
            {
                return notbal;
             }
         }
    }
    if(st.empty())
    return bal;
    return notbal;   
  }
int main()
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL
    int t;
    cin >> t;
    while(t--)
    {
        string pat;
        cin >> pat;
        cout << isBal(pat,pat.size()) << endl;
   }
   return 0;
}
