#include <bits/stdc++.h>
using namespace std;
void NGE(long int* arr, long int M);



void NGE(long int* arr, long int* aux, long int M)
{
    stack <long int> s;
    for (long int i = 0; i < M; i++)
    {
        while (!s.empty() && arr[s.top()] < arr[i])
        {
            long int temp = s.top();
            s.pop();
            aux[temp] = arr[i];
        }
        s.push(i);
    }
    for (long int j = 0; j < M; j++)
    {
    cout << aux[j] << " ";
    }
    cout << endl;
}

int main() {
	long int N;
	cin >> N;
	for (long int i = 0; i < N; i++)
	{
	    long int M;
	    cin >> M;
	    long int arr[M];
	    long int aux[M];
	    for (long int j = 0; j < M; j++)
	    {
	        cin >> arr[j];
	        aux[j] = -1;
	    }
	    NGE(arr, aux, M);
	 }
	return 0;
}
