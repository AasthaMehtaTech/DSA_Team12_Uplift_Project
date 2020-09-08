#include <iostream>
using namespace std;

int main() {                   //needs to be efficient
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i,n=s.length();
	    int temp[123]={0};
	    for(i=0;i<n;i++)
	    {
	        temp[(int)s[i]]++;
	        if(temp[(int)s[i]]<2)
	        {
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
 
