#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;                   //enter number of lines
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<" ";        //printing space
        }
        for(j=1;j<=i;j++){
            cout<<"* ";       //printing star
        }
        cout<<endl;
    }
	return 0;
}
