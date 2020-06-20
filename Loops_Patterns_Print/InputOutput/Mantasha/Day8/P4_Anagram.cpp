#include <iostream>
using namespace std;
bool is_anagram(string a,string b)
{
   
    
    int len1=a.length();
    int len2=b.length();
   if(len1!=len2)
   return false;
   
   int value=0;
   for(int i=0;i<len1;i++)
   {
       value=value^(int)a[i];
       value=value^(int)b[i];
   }
   if(value==0)
   return true;
   else
   return false;
}
int main()
 {

	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a,b;
	    bool result=is_anagram(a,b);
	    if(result)
	    cout<<"YES \n";
	    else
	    cout<<"NO \n";
	}
	return 0;
}
