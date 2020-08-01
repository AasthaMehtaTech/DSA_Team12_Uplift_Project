// check if two strings are anangram

#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool is_anagram(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1!=n2)
        return false;
    else {
        sort(s1.begin(),s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
}

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    t--;
	    string s1,s2;
	    cin>>s1>>s2;
	    bool ans = is_anagram(s1,s2);
	    if(ans)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
