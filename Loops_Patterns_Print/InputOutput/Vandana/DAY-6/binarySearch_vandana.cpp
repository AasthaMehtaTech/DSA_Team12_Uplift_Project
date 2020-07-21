#include <iostream>
#include<stdlib.h>
using namespace std;
int binary(int a[100], int l,int h, int k);
int main()
{
    int n,i,k,pos;
    cout<<"Enter the number of elements of the matrix\n";
    cin>>n;
    int a[n],h=n-1;
        cout << "Enter elements \n";
		for(int i=0; i<n; i++){
            cin>>a[i];
		}
		cout<<"Enter the search element\n";
		cin>>k;
		pos = binary(a,0,n-1,k);
		cout<<pos<<endl;
}
int binary(int a[100], int l, int h, int k){
    if(l>h)
        return -1;
    int mid = (l+h)/2;
    if(a[mid]==k)
        return mid;
    if(a[mid]<k)
        return binary(a, mid+1, h, k);
    else
        return(a, l, mid-1, k);
}




