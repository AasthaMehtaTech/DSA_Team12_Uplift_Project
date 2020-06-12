#include<iostream>
#include<math.h>
using namespace std;

int main ( ) {
    int t, n;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    for (int i = 0; i < t; i++) {
        int ans = 0;
        cin>>n;
        for (int j = 0; n != 0; j++) {
            ans += pow(2, j) * (n%10);
            n /= 10;
        }
        cout<<ans<<endl;
    }
}
