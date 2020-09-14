class Solution {
public:
    int myAtoi(string str) {
        stringstream newstr(str);    
        int x=0;
        newstr>>x;
        return x;
    }
};



//The stringstream class in C++ allows a string object to be treated as a stream.
//It is used to operate on strings.
//By treating the strings as streams we can perform extraction and insertion operation from/to string just like cin and cout streams.
