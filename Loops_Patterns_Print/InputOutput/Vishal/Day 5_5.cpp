// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int m,n;
 cin>>m>>n;
 int row[m],column[n];
 int a[100][100];
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
     }
}

for(int i=0;i<m;i++)
 {
     row[i]=1;
}


for(int i=0;i<n;i++)
 {
     column[i]=1;
}


 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {     
      if(a[i][j]==0)
      {
          row[i]=0;
          column[j]=0;
      }
     }
}

 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         
         if(row[i]==0||column[j]==0)
         {
             a[i][j]=0;
         }
     }
 }
         
         
         for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         cout<<a[i][j]<<"\n";
     }
}
}