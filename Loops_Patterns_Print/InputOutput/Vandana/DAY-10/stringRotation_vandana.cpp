#include <iostream>
using namespace std;

int main() {
	int n,t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    n = s1.length();
	    if((s1[0] == s2[n-2]&&s1[1] == s2[n-1]) || (s2[0] == s1[n-2] && s2[1] == s1[n-1]))
	        cout<<"1"<<endl;
	       else cout<<"0"<<endl;
	}
	return 0;
}
