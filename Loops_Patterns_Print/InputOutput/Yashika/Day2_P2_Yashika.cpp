#include<iostream>
using namespace std;

int main ( ) {
    int n;
    cout<<"Enter the number of lines for the pattern: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        int j;
        for (j = 1; j <= i; j++) cout<<j<<" ";
        for (j = 1; j <= (2*n)-(2*i)-1; j++) cout<<"  ";
        if (i == n) j = i-1;
        else j = i;
        for (; j >= 1; j--) cout<<j<<" ";
        cout<<endl;
    }
}
