/*
1
*
* *
* * *

2    *
    * *
   * * *

3
 * * * *
 * * *
 * *
 *

4
     *
    * *
   * * *
    * *
     *


*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter an integer n for first three patterns\n";
    cin>>n;

    cout<<"---------Pattern 1--------- \n";
    for(i=0; i<n;i++)
       {
        for(j=0;j<=i;j++)
           cout<<"*";
        cout<<endl;
       }

    cout<<endl<<endl;

    cout<<"---------Pattern 2--------- \n";
   for(k=0, i=1; i<=n; i++, k=0)
   {
       for(int space= 1; space<=n-i; space++)
        cout<<" ";

       while(k!= (2*i)-1)
       {
           cout<<"*";
           k++;
       }
       cout<<endl;
   }

    cout<<endl<<endl;

       cout<<"---------Pattern 3--------- \n";
    for(i=n; i>0; i--)
       {for(j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
       }


      cout<<endl<<endl;

       cout<<"---------Pattern 4--------- \n";
       for(k=0, i=1; i<=n; i++ ,k=0)
       {
           for(int space = 1; space<= n-i; space++)
            cout<<" ";
           while(k!= (2*i)-1)
           {
               cout<<"*";
               k++;
           }
           cout<<endl;
       }

      for(k=0, i=n-1; i>=1; i-- ,k=0)
       {
           for(int space = 1; space<= n-i; space++)
            cout<<" ";
           while(k!= (2*i)-1)
           {
               cout<<"*";
               k++;
           }
           cout<<endl;
       }



    return 0;



}


