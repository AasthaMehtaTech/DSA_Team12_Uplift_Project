#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    string s1;
	    string s2;
	    cin >> s1;
	    cin >> s2;
	    for(int i = 0;i<s1.length();)
	    {
	        while(s2.find(s1[i])!= string::npos)
	            s1.erase(i,1);
	       i++;     
	            
	    }
	    cout << s1 << endl;
	    
	}
	return 0;
}
