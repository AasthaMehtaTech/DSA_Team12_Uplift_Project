  
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Enter total no. of elements to be inserted : ";
    cin>>n;			//4
    int x[n];
    for(int i=0;i<n;i++)
    {
    	cout << "Value at " << i <<"th index of array : ";
        cin>>x[i];	//1 5 2 2
    }
   	int sum=0;
    for(int i=0;i<n;i++)//n=4 - 0;1;2;3;4(out of loop)
    {
       sum+=x[i]*x[i];//0+1=1;1+5*5=26;26+2*2=30;30+2*2=34;
    }
    
    cout<<"Sum of Squares : "<< sum << endl;
    
   return 0;
}
