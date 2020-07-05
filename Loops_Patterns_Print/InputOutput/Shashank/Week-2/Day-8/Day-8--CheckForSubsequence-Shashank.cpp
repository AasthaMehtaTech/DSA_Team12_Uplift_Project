#include <iostream>
using namespace std;
int main(){
int t;
    cin >> t;
    while(t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        int j = 0;
        for(int i = 0;i<s2.length();i++)
        {
            if(j>=s2.length())
                break;
            else if(s2[i] == s1[j])
                j++;
        }
        if(j<s1.length())
            cout << 0 << endl;
        else cout << 1 << endl;        
        
    }
	return 0;
}
