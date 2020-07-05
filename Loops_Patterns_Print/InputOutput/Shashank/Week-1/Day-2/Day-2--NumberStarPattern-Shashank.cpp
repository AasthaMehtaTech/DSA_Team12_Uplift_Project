#include <iostream>
using namespace std;

int main(){
  cout << "Enter no of rows : ";
	int n;
	cin >> n;
	
	int b=1;
         for(int i=1;i<=n;i++)  //loop for new line
         {  
             b=1;
             for(int j=n;j>=i;j--)
             {
                 cout << b << " ";
                 b++;
             }
            for(int k=2;k<(2*i)-1;k++)
            {
                cout << "* ";
            }                   
            cout << endl;          
         }
return 0;
}
