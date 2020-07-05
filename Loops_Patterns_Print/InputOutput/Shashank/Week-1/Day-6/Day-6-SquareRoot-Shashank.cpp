#include<bits/stdc++.h>
using namespace std;
 int mySqrt(int x) {
        return pow(x,0.5);
    }
    
int main(){
    int n;
    cout << "Enter the value : ";
    cin>>n;
    int ans=mySqrt(n);
    cout << "The Square Root of " << n << " is (if it is not perfect square it will give floor value) "
	 << ans;
}
