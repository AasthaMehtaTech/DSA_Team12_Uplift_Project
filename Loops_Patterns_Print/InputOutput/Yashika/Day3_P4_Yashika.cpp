#include<iostream>
#include<cstdlib>
using namespace std;

int main ( ) {
    int n, max = -1, diff = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if (i == 0) continue;
        diff = abs(arr[i-1] - arr[i]);
        if (max == -1 || diff > max) max = diff;
    }
    cout<<max;
}
