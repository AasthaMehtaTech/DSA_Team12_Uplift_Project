#include<iostream>
using namespace std;

int main ( ) {
    int n;
    cout<<"Enter the number of lines for the Upward Star Triangle pattern: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout<<"* ";
        cout<<endl;
    }
}
