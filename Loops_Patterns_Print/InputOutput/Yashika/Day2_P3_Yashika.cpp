#include<iostream>
using namespace std;

int main ( ) {
    int n;
    cout<<"Enter the number of lines for the pattern: ";
    cin>>n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout<<j<<" ";
        for (int j = 1; j <= 2*(n-i)-1; j++) cout<<"* ";
        cout<<endl;
    }
}
