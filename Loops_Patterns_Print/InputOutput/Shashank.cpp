// 1: Printing a Square
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {   
        
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
