#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n=0,m=0,l=0,num=0,ans=0,i=0,count=0;
    cin>>n;
    m=n;
    l=floor(log10(n)+1);
    for(i=0;i<l;i++)
    {
        num=n%10;
        if(num==1)
        {
            ans=ans+pow(2,count);
            count++;
        }
        else{
            count++;
        }
        n=n/10;
    }
    cout<<ans<<endl;
	}
	return 0;
}
