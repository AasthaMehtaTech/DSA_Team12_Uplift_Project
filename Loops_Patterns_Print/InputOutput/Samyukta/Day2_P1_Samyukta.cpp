#include <iostream>
using namespace std;

int main() {
	int n,i,j,a=0,b=a+1,c;
	cin>>n;
	for(i=1;i<=n;i++){             //for number of lines
	    for(j=1;j<=i;j++){         //for each line
	        cout<<a<<" ";          //printing series
	        c=a+b;         
	        a=b;
	        b=c;
	    }
	    cout<<endl;
	}
	return 0;
}
