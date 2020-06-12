#include<iostream>
using namespace std;

int main ( ) {
    int n, first = 0, next = 1, temp;
    cout<<"Enter the number of lines for the pattern: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<first<<" ";
            temp = first + next;
            first = next;
            next = temp;
        }
        cout<<endl;
    }
}
