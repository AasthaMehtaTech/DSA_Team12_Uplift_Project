#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    int i,suma=0,sumb=0,l1,l2;
	    cin>>s1>>s2;
	    l1=s1.length();
	    l2=s2.length();
	    if(l1==l2)
	    {
	      for(i=0;i<l1;i++)
	      {
	          suma+=s1[i];
	          sumb+=s2[i];
	      }
	      if(suma==sumb)
	      {
	          cout<<"YES";
	      }
	      else
	      {
	          cout<<"NO";
	      }
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}
