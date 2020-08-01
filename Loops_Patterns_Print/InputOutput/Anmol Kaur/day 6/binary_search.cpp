/*
Eg:
Input:
5
4 5 1 2 3
2
 Output:
 3
 Explanation:
 The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.
 */

 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n ;i++)
        cin>>a[i];
  int k;
  cin>>k;

  int s=0,e=n-1;
  while(s<=e)
  {
      int mid = (s+e)/2;
      if( a[mid] == k)
        {cout<< mid;
        return 0;}

        if( a[mid] < k)
        {
            s = mid +1;
        }

        else{
            e = mid-1;
        }
  }

    return 0;
}
