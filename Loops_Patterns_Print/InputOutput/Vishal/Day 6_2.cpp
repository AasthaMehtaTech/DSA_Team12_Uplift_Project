#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int x,t=0;
cin>>x;

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[j]-a[i]==x)
        t++;
    }
}
cout<<t;
}