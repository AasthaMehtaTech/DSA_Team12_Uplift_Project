#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str1,str2;
	    cin>>str1;
	    str2.resize(str1.length());
	    int a=0;
	    for(int i=0;i<str1.length();i++)
	    {
	        if(str2.find(str1[i])==string::npos)
	        {
	        str2[a]=str1[i];
	        a++;
	        }
	    }
	    cout<<str2<<endl;
	}
	return 0;
}
