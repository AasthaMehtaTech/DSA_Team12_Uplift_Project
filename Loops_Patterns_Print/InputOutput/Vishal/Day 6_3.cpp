#include <bits/stdc++.h> 
using namespace std; 
  

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  

        if (arr[mid] == x) 
            return mid; 
  
        
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
   
    return -1; 
} 
  
int main(void) 
{ 
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "The element is not present in array"
                   : cout << "The element is present at position " << result+1; 
    return 0; 
} 