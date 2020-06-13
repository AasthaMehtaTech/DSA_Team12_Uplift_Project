#include <iostream>
using namespace std;

void MaxMinSum(int n)
{
    int response;
    int sum = 0;
    int max;
    int min;

    for (int i = 1; i <= n; i++)
    {
        cout << "Please enter the number in the " << i << " position: ";
        cin >> response;
        if (i == 1)
        {
            min = response;
            max = response;
        }
        (min > response) ? min = response : min = min;
        (max < response) ? max = response : max = max;
        sum += response;
    }
    cout << "Sum: " << sum << endl;
    //cout << "Average: " << (float)sum / n << std::endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main()
{
    int numberCount;
    do
    {
        std::cout << "How many numbers would you like to print? ";
        std::cin >> numberCount;
    }
	while(numberCount <= 0);
    MaxMinSum(numberCount);   
}
