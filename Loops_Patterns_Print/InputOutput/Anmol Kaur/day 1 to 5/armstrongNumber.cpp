#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    if(n<100)
        return false;
    int digits = floor(log10(n)+1);  // to count the number of digits
    int num=0,d=0;
    int temp =n;
    while(n>0)
    {
        d = n%10;
        num = num + pow(d,digits);
        n/=10;
    }

    if (temp == num)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout<<"Enter an integer\n";
    cin>>n;
    cout<<std::boolalpha<<checkArmstrong(n);
    return 0;
}
