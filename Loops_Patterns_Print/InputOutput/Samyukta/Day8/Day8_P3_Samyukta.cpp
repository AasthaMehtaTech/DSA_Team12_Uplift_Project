#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i=0,j=0,m,n;
	    string s1,s2;
	    cin>>s1>>s2;
	    m=s1.length();
	    n=s2.length();
	    while(i<m||j<n)
	    {
	        if(n==j&&i<m)              //if second string is empty
	        {
	            cout<<s1[i];
	            i++;
	        }
	        else if(m==i&&j<n)        //if first string is empty
	        {
	            cout<<s2[j];
	            j++;
	        }
	        else
	        {
	            cout<<s1[i];
	            cout<<s2[j];
	            i++;
	            j++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
