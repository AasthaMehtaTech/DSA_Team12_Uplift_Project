// Given two strings s1 and s2, remove those characters from first string which are present in second string.
//Both the strings are different and contain only lowercase characters.

#include <iostream>
#include <string>
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
	    for(int i=0 ; i<s2.size(); i++ )
	    {
	        for(int j=0; j<s1.size(); j++)
	        {
	            if(s2[i] == s1[j])
	            {
	                s1.erase (s1.begin()+j);
	                j--; // for adjacent cases it's required
	            }
	        }
	    }
	    cout<<s1<<endl;
	}
	return 0;
}
