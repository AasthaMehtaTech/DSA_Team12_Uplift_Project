//Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character
//of S2 and so on till the strings end.

//NOTE: Add the whole string if other string is empty.

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t!=0)
	{
	    t--;
	    string s1,s2;
	    cin>>s1>>s2;
	    int n,m;
	    int i=0,j=0,k=0;
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
