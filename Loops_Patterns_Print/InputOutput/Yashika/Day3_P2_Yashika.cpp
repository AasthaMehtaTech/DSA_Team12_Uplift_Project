#include<iostream>
#include<math.h>
using namespace std;

int main ( ) {
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        sum += round(pow(arr[i], 2));
    }
    cout<<sum;
}
