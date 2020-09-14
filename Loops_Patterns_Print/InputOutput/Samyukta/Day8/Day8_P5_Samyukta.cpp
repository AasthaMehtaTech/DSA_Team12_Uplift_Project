#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j=0;
	    string s1,s2;
	    cin>>s1>>s2;
	    for(i=0;i<s2.length();i++)
	    {
	        if(j>s2.length())
	        {
	            break;
	        }
	        else
	        {
	            if(s1[j]==s2[i])
	            {
	                j++;
	            }
	        }
	    }
	    if(j<s1.length())
	    {
	        cout<<"0";
	    }
	    else
	    {
	        cout<<"1";
	    }
	    cout<<endl;
	}
	return 0;
}




//Another approach





//Time Complexity: O(n)


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i=0,j=0;                             //i will point s1 and j will point s2
	    string s1,s2;                            //s1 is substring
	    cin>>s1>>s2;                             //s2 is full string
	    while(i<s1.length() && j<s2.length())
	    {
	        if(s1[i]==s2[j])
	        {
	            i++;
	        }
	        j++;
	    }
	    if(i==s1.length())
	    {
	        cout<<"Yes";
	    }
	    else
	    {
	        cout<<"No";
	    }
	    cout<<endl;
	}
	return 0;
}
