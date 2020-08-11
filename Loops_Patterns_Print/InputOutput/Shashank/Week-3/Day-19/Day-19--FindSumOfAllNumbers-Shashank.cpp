#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a[100], n, k, l, flag=0, swap, c, d;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for (c = 0 ; c < ( n - 1 ); c++)
          {
            for (d = 0 ; d < n - c - 1; d++)
            {
              if (a[d] > a[d+1])
              {
                swap = a[d];
                a[d] = a[d+1];
                a[d+1] = swap;
              }
            }
          }
	    l=0;
	    for(int p=0;p<n-3;p++)
	    {
	        if(p>0 && a[p]==a[p-1])
	            continue;
	        for(int q=p+1;q<n-2;q++)
	        {
    	        if(q>p+1 && a[q]==a[q-1])
    	         continue;
    	        for(int r=q+1;r<n-1;r++)
    	        {
    	            if(r>q+1 && a[r]==a[r-1])
    	             continue;
    	            for(int s=r+1;s<n;s++)
    	            {
    	                if(s>r+1 && a[s]==a[s-1])
    	                   continue;
    	                else
            	            {
            	                l=a[p]+a[q]+a[r]+a[s];
            	                if(l==k)
            	                {
            	                    cout<<a[p]<<" "<<a[q]<<" "<<a[r]<<" "<<a[s]<<" "<<"$";
            	                    flag++;
            	                }
            	            }
    	            }
    	           
    	        }
    	        
	        }
	    }
	    if(flag==0)
	        cout<<-1;
	    cout<<endl;
	}
	return 0;
}
