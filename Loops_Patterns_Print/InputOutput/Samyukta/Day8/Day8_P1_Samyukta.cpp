#include <iostream>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j;
	    string s1,s2;
	    cin>>s1>>s2;
	    int l1=s1.length();
	    int l2=s2.length();
	    for(i=0;i<l1;i++)
	    {
	        for(j=0;j<l2;j++)
	        {
	            if(s1[i]==s2[j])
	            {
	                s1.erase(i,1);
	                l1--;
	                i--;
	            }
	        }
	    }
	    cout<<s1<<endl;
	}
	
	return 0;
}
