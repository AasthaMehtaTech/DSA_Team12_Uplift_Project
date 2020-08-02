// Count and Say
//The count-and-say sequence is the sequence of integers with the first five terms as following: 1, 11 , 21, 1211, 111221, .......

class Solution {
public:
    string countAndSay(int n) {

         if (n == 0) return "";
        if (n == 1) return "1";

        string prev = "1";
        string current = prev;

        for (int seqNum = 2; seqNum <= n; seqNum++) {    // run from starting to generate second string

            current.clear();
            //cheack all digits in the string
            for (int j = 0; j < prev.length(); j++) {

                int count = 1; // we have at least 1 occourence of each digit

                // get the number of times same digit occurred (be carefull with the end of the string)
                while ((j + 1 < prev.length()) && (prev[j] == prev[j + 1])) {
                    count++;
                    j++;        // we need to keep increasing the index inside of the string
                }

                // add to new string "count" + "digit itself"
                current.append(to_string(count) + prev[j]);
            }

            // save temporary result
            prev = current;
        }

        return current;
    }
        /*
        string first = "1";
    string second = "11";
    if(a==1)
    {
        return first;
    }
    string prev = first;
    for(int i=2;i<=a;i++)
    {
        string newString;
        int count = 0;
        for(int j=0;j<prev.length()-1;j++)
        {
            count++;
            if(prev[j]!=prev[j+1])
            {
                newString += to_string(count)+prev[j];
                count=0;
            }
        }
        count++;
        prev=newString+to_string(count)+prev[prev.length()-1];
    }
    return prev;
    }
   */
};
