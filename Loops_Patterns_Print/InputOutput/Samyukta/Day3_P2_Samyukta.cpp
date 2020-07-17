#include <iostream>
#include<math.h>
using namespace std;

int main() {
   int n,i,sum=0;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
       sum=sum+pow(arr[i],2);
       cout<<sum<<" ";
   }
   cout<<sum;
	return 0;
}
