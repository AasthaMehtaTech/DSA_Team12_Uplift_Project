#include <iostream>
#include<cstdlib>
using namespace std;

	int main()
	{
	    int n;
	    cout << "Enter Total elements of array : ";
	    cin>>n;
	    long x[n];
	    for(int i=0;i<n;i++)
	    {
	    	cout << "Enter element at "<<i<<"th index : ";
	        cin>>x[i];
	    }
	   long d[n];
	   long max=0;
	    
		for(int i=0;i<n-1;i++)
	    {
	        d[i]=abs(x[i+1]-x[i]);
	    }
	    max=d[0];
	    for(int i=0;i<n-1;i++)
	    {
	       if(d[i]>max)
	       max=d[i];
	    
	    }
	    cout<<"Maximum Absolute Difference : "<<max;
	   return 0;
	}
