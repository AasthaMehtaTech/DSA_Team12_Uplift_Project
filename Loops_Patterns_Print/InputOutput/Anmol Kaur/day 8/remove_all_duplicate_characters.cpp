//Given a string which may contains lowercase and uppercase chracters. The task is to remove all  duplicate characters from the string and print the resultant string.
// The order of remaining characters in the output should be same as in the original string.

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t!=0)
	{
	    t--;
	    string s1;
	    cin>>s1;
	    for(int i=0; i<s1.size(); i++)
	    {
	        for(int j=i+1; j< s1.size(); j++ )
	        {
	            if(s1[i] == s1[j])
	            {
	                s1.erase(s1.begin()+j);
	                j--;
	            }
	        }
	    }
	    cout<<s1<<endl;
	}
	return 0;
}
