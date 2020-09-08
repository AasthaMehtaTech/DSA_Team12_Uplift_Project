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
