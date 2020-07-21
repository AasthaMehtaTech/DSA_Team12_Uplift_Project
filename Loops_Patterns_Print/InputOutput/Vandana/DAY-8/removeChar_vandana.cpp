#include <iostream>

#include <bits/stdc++.h>

using namespace std;


int main() {

	int t;
	
	cin>>t;
	
	while(t--){

		int i,j,k=0,m=0,n=0;

	    	char a[90], b[90];

	    	cin>>a>>b;

	    	n = strlen(a);

	    	m = strlen(b);

	    	for(i=0;i<n;i++){

	        	for(j=0;j<m;j++){

	            		if(a[i]==b[j]){

	                		for(k=i;k<n;k++){

	                    			a[k] = a[k+1];

	               			 }
	      
          			n--;
	               
 				i--;
	           
    				break;
	     
       			}
	    
   		 }
	   
	}
	   
for(i=0;i<n;i++)

	cout<<a[i];
	 
  	cout<<"\n";
	
}

	return 0;

}
