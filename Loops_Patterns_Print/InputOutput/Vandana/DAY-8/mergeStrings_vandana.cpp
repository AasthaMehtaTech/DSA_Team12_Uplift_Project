#include <iostream>
using namespace std;

	int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int n,m,i=0,j=0;
	    n = s1.length();
	    m = s2.length();
	    while(i<n||j<m){
	        if(j==m && i<n){
	            cout<<s1[i];
	            i++;
	        }
	        else if(i==n && j<m){
	            cout<<s2[j];
	            j++;
	        }
	        else{
	            cout<<s1[i];
	            cout<<s2[j];
	            i++;
	            j++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
	}
