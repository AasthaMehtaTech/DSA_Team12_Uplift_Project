#include<iostream>
#include<math.h>
using namespace std;

int main ( ) {
    int t, n, temp, arm, length;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    for (int i = 0; i < t; i++) {
        cout<<"Enter the number to check if it is an Armstrong number: ";
        cin>>n;

        length = 0;
        temp = n;
        while (temp != 0) { temp /= 10; length++; }

        temp = n;
        arm = 0;
        while (temp != 0) {
            arm += pow(temp%10, length);
            temp /= 10;
        }

        if (arm == n) cout<<n<<" is an Armstrong number? true\n";
        else cout<<n<<" is an Armstrong number? false\n";
    }
}

