#include<iostream>
using namespace std;

// Utility function to swap two elements A[i] and A[j] in the array
void swap(int A[], int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

// Linear-time partition routine to sort an array containing 0, 1 and 2
// It similar to three-way Partitioning for Dutch national flag problem
int threeWayPartition(int A[], int end)
{
	int start = 0, mid = 0;
	int pivot = 1;

	while (mid <= end)
	{
		if (A[mid] < pivot)		 // current element is 0
		{
			swap(A, start, mid);
			++start, ++mid;
		}
		else if (A[mid] > pivot)	// current element is 2
		{
			swap(A, mid, end);
			--end;
		}
		else						 // current element is 1
		{
			++mid;
		}
	}
}
// Sort an array containing 0’s, 1’s and 2’s
int main()
{
	int n;
	cout << "Enter size of Array : ";
	cin >>  n;
	
	int A[n];
	for (int i = 0 ; i < n; i++) {
		cout << "Enter "<< i << "th element : ";
		cin >> A[i];
	}	
	threeWayPartition(A, n - 1);
	
	cout << "Sorted Array of 0's , 1's and 2's : ";
	
	for (int i = 0 ; i < n; i++) {
		cout << A[i];
	}
	return 0;
}
