#include <iostream>
using namespace std;

int main()  {
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
	    int flag=0;
	    string s;
	    getline(cin,s);
	    int lookup[26]={0};
	    for(int i=0;i<s.size();i++)
	    {
	        if((int)s[i] >= 65 && (int)s[i] <= 90)
	            lookup[(s[i]+32)-'a']++;
	        else if((int)s[i] >=97 && (int)s[i]<=122)
	            lookup[s[i]-'a']++;
	    }
	    for(int i=0;i<26;i++)
	        if(lookup[i]==0)
	        {
	            flag=1;
	            break;
	        }
	   if(flag==1)
	    cout << 0;
	   else
	    cout << 1;
	   cout << "\n";
	}
	return 0;
}
