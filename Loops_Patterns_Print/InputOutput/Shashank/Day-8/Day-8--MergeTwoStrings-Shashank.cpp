#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2,a="";
	    cin>>s1>>s2;
	    int n,m,i=0,j=0,k=0;
	    n=s1.length();
	    m=s2.length();
	    while(i<n||j<m)
	    {
	        if(i==n&&j<m)
	        {
	            cout<<s2[j];
	            j++;
	        }
	        else if(j==m&&i<n)
	        {
	            cout<<s1[i];
	            i++;
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
