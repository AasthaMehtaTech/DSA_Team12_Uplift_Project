//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

//Note: For the purpose of this problem, we define empty string as valid palindrome.

//example Input: "A man, a plan, a canal: Panama" => Output: true

class Solution {
public:
   bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j) {
            if(!isalnum(s[i])) i++; // implies space so check next character
            else if(!isalnum(s[j])) j--; // implies space so check next character
            else if(tolower(s[i]) == tolower(s[j])) { i++;j--;} // if digit or aplhabet is present then check
            else return false;
        }
            return true;
    }
};
