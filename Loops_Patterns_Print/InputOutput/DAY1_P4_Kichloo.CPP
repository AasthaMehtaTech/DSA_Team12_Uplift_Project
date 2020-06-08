#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,x;
 cin>>n;
 for(int i=n;i>=1;i--)
 {
  for(int j=0;j<i;j++)
 {
 cout<<"*  ";
  }
  cout<<"\n";
}
getch();
}