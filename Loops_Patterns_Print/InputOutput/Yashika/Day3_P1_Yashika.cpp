#include<iostream>
using namespace std;

int main ( ) {
    int n, sum = 0, min = -1, max = -1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        sum += arr[i];
        if (min == -1 && max == -1) { min = max = arr[i]; }
        else if (arr[i] < min) min = arr[i];
        else if (arr[i] > max) max = arr[i];
    }

    cout<<"Max= "<<max<<"\nMin= "<<min<<"\nSum= "<<sum;
}
