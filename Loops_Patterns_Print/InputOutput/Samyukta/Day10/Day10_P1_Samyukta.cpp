#include <iostream>
using namespace std;

bool checkrotate(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    string clockwise="";
    string anticlockwise="";
    int len=s1.length();
    anticlockwise=anticlockwise+s2.substr(len-2,2)+s2.substr(0,len-2);
    clockwise=clockwise+s2.substr(2,len-2)+s2.substr(0,2);
    return (s1.compare(clockwise)==0||s2.compare(anticlockwise)==0);
}

int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<checkrotate(s1,s2);
	    cout<<endl;
	}
	return 0;
}
