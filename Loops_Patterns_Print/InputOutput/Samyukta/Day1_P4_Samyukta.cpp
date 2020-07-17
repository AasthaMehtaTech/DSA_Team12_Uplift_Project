#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;                     //enter number of lines
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";         //printing star
        }
        cout<<endl;
    }
	return 0;
}
