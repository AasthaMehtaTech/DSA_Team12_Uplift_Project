// C++ program to convert binary to decimal
// where input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}


int main()
{
    cout<<"First enter number of testcases then binary numbers\n";
	string num;
	int t;
	cin>>t;
	while(t>0)
    {

    t--;
	cin>>num;
	cout << binaryToDecimal(num) << endl;
    }
    return 0;
}

