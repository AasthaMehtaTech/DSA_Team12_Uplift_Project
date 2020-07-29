#include <iostream>
using namespace std;

int main(){
  cout << "Enter no of rows : ";
	int n;
	cin >> n;

	int b=1;
         for(int i=1;i<=n;i++) //Keeps a count of iteration  //loop for new line
         {
             b=1;
             for(int j=n;j>=i;j--) // for printing numbers
             {
                 cout << b << " ";
                 b++;
             }
            for(int k=2;k<(2*i)-1;k++) //for printing stars
            {
                cout << "* ";
            }
            cout << endl;
         }
return 0;
}
