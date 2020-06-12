#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,x,s=1;
 cin>>n;
 int sp=n-1;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<sp;j++)
 {
 cout<<" ";
 }

 for(j=0;j<s;j++)
 {
 cout<<" * ";
 }
 sp--;
 s++;
 cout<<endl;
 }
 getch();
 }
