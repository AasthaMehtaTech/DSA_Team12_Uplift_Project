class Solution {
public:                                                     //Isomorphic String one alphabet will point to same certain alphabet in second string
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        int m1[256]={0};
        int m2[256]={0};
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(m1[s[i]]!=m2[t[i]])
            {
                return false;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};








#include <iostream>
using namespace std;
bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length()) {
        return false;
    }
    int m1[256] = { 0 };
    int m2[256] = { 0 };
    int l = s.length();
    for (int i = 0; i < l; i++) {
        if (m1[s[i]] != m2[t[i]]) {
            return false;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    if (isIsomorphic(s, t)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}

/*
Time Complexity:O(n)

Input: s = "egg", t = "add"
Output: true

Input: s = "foo", t = "bar"
Output: false
*/

