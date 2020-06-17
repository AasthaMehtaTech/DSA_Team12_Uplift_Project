#include<iostream>
using namespace std;
int count_diffK(int arr[], int n, int k) {
   int count = 0;
   //picking elements one by one
   for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++)
         if (arr[i] - arr[j] == k || arr[j] - arr[i] == k )
            count++;
   }
   return count;
}
int main(){
   int n;
   cout << "Enter size of array : ";
   cin >> n;
   
   int arr[n];
   cout << "Enter elements in array : ";
   for(int i=0; i<n; i++){
   		cin >> arr[i];
   }
   
   int k;
   cout << "Enter value of K : ";
   cin >> k;
   cout << "Count of pairs with given diff is : " << count_diffK(arr, n, k);
   return 0;
}
