/*
Take N(number of rows), print the following pattern( ex: N=4)
    0
    1 1
    2 3 5
    8 13 21 34

Take N(number of rows), print following pattern (N=4)
    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1

Take N(number of rows), print following pattern (N=5)

1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

*/

#include<iostream>
using namespace std;

int main()
{
    int a=0, b=1,c = 0;
    int n;
    cin>>n;
    cout<<"------Pattern 1 is-------\n";
    for(int i =0; i<n; i++)
    {
        for(int j= 0;j<=i; j++)
            {
                cout<<c<<" ";
                a = b;
                b = c;
                c = a+b;
            }
        cout<<endl;
    }

    cout<<"------Pattern 2 is-------\n";
    for(int i = 1; i<= (2n-1); i++)
    {
        for(int j =2n-1; j>0 ; j++)
        {
            if(j == )
        }
    }
    return 0;
}
