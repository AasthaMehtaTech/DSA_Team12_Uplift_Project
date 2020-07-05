# Week 2

## Day 8 Problems Solution

### 1. [Remove character](https://practice.geeksforgeeks.org/problems/remove-character/0)

Given two strings s1 and s2, remove those characters from first string which are present in second string. Both the strings are different and contain only lowercase characters.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-8/Day-8--RemoveCharacter-Shashank.cpp)


**Example:**

**Input:**
```
2
geeksforgeeks
mask
removeccharaterfrom
string
```
**Output:**
```
geeforgee
emovecchaaefom
```


### 2. [Remove all duplicates from a given string](https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string/0)

Given a string which may contains lowercase and uppercase chracters. The task is to remove all  duplicate characters from the string and print the resultant string.  The order of remaining characters in the output should be same as in the original string.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-8/Day-8--RemoveAllDupCharacter-Shashank.cpp)


**Example:**

**Input:**
```
2
geeksforgeeks
HappyNewYear
```
**Output:**
```
geksfor
HapyNewYr
```


### 3. [Merge two strings](https://practice.geeksforgeeks.org/problems/merge-two-strings/0)

Given two strings S1 and S2 as input, the task is to merge them alternatively i.e. the first character of S1 then the first character of S2 and so on till the strings end.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-8/Day-8--MergeTwoStrings-Shashank.cpp)

**Example:**

**Input:**
```
2
Hello Bye
abc def
```
**Output:**
```
HBeylelo
adbecf
```



### 4. [Anagram](https://practice.geeksforgeeks.org/problems/anagram/0)

Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-8/Day-8--Anagram-Shashank.cpp)

**Example:**

**Input:**
```
2
geeksforgeeks forgeeksgeeks
allergy allergic
```
**Output:**
```
YES
NO
```



### 5. [Check for subsequence](https://practice.geeksforgeeks.org/problems/check-for-subsequence/0)

Given two strings A and B, find if A is a subsequence of B.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-8/Day-8--CheckForSubsequence-Shashank.cpp)

**Example:**

**Input:**
```
2
AXY YADXCP
gksrek geeksforgeeks
```
**Output:**
```
0
1
```



## Day 9 Problems Solution

### 1. [Reverse Integer](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/880/)

Given a 32-bit signed integer, reverse digits of an integer.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-9/Day-9--ReverseInteger-Shashank.cpp)

**Example 1:**
```
Input: 123
Output: 321
```
**Example 2:**
```
Input: -123
Output: -321
```
**Example 3:**
```
Input: 120
Output: 21
```



### 2. [Valid Palindrome](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/883/)

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
**Note:** For the purpose of this problem, we define empty string as valid palindrome.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-9/Day-9--ValidPlindrome-Shashank.cpp)


**Example 1:**
```
Input: "A man, a plan, a canal: Panama"
Output: true
```
**Example 2:**
```
Input: "race a car"
Output: false
```



### 3. [String To Integer](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/884/)

Implement `atoi` which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.

**Note:**

Only the space character ' ' is considered as whitespace character.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. If the numerical value is out of the range of representable values, INT_MAX (2^31 − 1) or INT_MIN (−2^31) is returned.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-9/Day-9--StringToInteger-Shashank.cpp)

**Example 1:**
```
Input: "42"
Output: 42
```
**Example 2:**
```
Input: "   -42"
Output: -42
Explanation: The first non-whitespace character is '-', which is the minus sign.
             Then take as many numerical digits as possible, which gets 42.
```                 
**Example 3:**
```
Input: "4193 with words"
Output: 4193
Explanation: Conversion stops at digit '3' as the next character is not a numerical digit.
```
**Example 4:**
```
Input: "words and 987"
Output: 0
Explanation: The first non-whitespace character is 'w', which is not a numerical 
             digit or a +/- sign. Therefore no valid conversion could be performed.
```    
**Example 5:**
```
Input: "-91283472332"
Output: -2147483648
Explanation: The number "-91283472332" is out of the range of a 32-bit signed integer.
             Thefore INT_MIN (−231) is returned.
```


### 4. [Count And Say](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/886/)

The count-and-say sequence is the sequence of integers with the first five terms as following:
```
1.     1
2.     11
3.     21
4.     1211
5.     111221
```
```
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then "one 1" or 1211.
```

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-9/Day-9--CountAndSay-Shashank.cpp)

**Example 1:**
```
Input: 1
Output: "1"
Explanation: This is the base case.
```
**Example 2:**
```
Input: 4
Output: "1211"
Explanation: For n = 3 the term was "21" in which we have two groups "2" and "1", "2" can be read as "12" which means frequency = 1 and value = 2, the same way "1" is read as "11", so the answer is the concatenation of "12" and "11" which is "1211".
```
**Note:** Each term of the sequence of integers will be represented as a string.


### 5. [Longest Common Prefix](https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/887/)

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-9/Day-9--LongestCommonPrefix-Shashank.cpp)

**Example 1:**
```
Input: ["flower","flow","flight"]
Output: "fl"
```
**Example 2:**
```
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```
**Note:**  All given inputs are in lowercase letters a-z.


## Day 10 Problems


### 1. [Check if string is rotated by two places](https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places/0)

Given two strings a and b. The task is to find if a string 'a' can be obtained by rotating another string 'b' by 2 places.
**Input:**
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. In the next two line are two string a and b.
**Output:**
For each test case in a new line print 1 if the string 'a' can be obtained by rotating string 'b' by two places else print 0.

*Constraints:*
1 <= T <= 50
1 <= length of a, b < 100

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-10/Day-10--CheckStringRotatedByTwoPlaces-Shashank.cpp)

**Example:**

**Input:**
```
2
amazon
azonam
geeksforgeeks
geeksgeeksfor
```
**Output:**
```
1
0
```

### 2. [Permutation in String](https://leetcode.com/problems/permutation-in-string/)

Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.

 #### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-10/Day-10--PermutationInString-Shashank.cpp)

**Example 1:**

**Input:**
```
s1 = "ab" s2 = "eidbaooo"
```
**Output:**
```
True
Explanation: s2 contains one permutation of s1 ("ba").
```

### 3. [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)

Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-10/Day-10--IsomorphicString-Shashank.cpp)

**Example 1:**

**Input:**
```
s = "egg", 
t = "add"
```
**Output:**
```
true
```

### 4. [Pangram Strings](https://practice.geeksforgeeks.org/problems/pangram-strings/0)

Check if the given string S is a Panagram or not. A pangram is a sentence containing every letter in the English Alphabet.

**Example :** The quick brown fox jumps over the lazy dog ” is a Pangram [Contains all the characters from ‘a’ to ‘z’]
 
 #### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-10/Day-10--PangramStrings-Shashank.cpp)

**Input**
```
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains a case insensitvie string S.
```
**Note:** The input string can contain whitespaces.

**Output**
```
For each test case T print in a new line 1 if the string is pangram else print 0.
```

### 5. [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)

Given an input string, reverse the string word by word.
 
 #### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-10/Day-10--ReverseWordString-Shashank.cpp)
 
**Example 1:**

**Input:** 
```
"the sky is blue"
```
**Output:**
```
"blue is sky the"
```


## Day-11 Problems


### 1. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Given a string, find the length of the longest substring without repeating characters.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-11/Day-11--LongestSubstringWithoutRepeatingCharacters-Shashank.cpp)

**Example 1:**
```
Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
```
**Example 2:**
```
Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```
**Example 3:**
```
Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

### 2. [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given **n = 3**, a solution set is:

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-11/Day-11--GenerateParentheses-Shashank.cpp)

```
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]
```

### 3. [Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/)

Given a string containing only digits, restore it by returning all possible valid IP address combinations.
A valid IP address consists of exactly four integers (each integer is between 0 and 255) separated by single points.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-11/Day-11--RestoreIpAddresses-Shashank.cpp)

**Example:**
```
Input: "25525511135"
Output: ["255.255.11.135", "255.255.111.35"]
```

### 4. [Minimum Number of Frogs Croaking](https://leetcode.com/problems/minimum-number-of-frogs-croaking/)

Given the string `croakOfFrogs`, which represents a combination of the string "croak" from different frogs, that is, multiple frogs can croak at the same time, so multiple “croak” are mixed. Return the minimum number of different frogs to finish all the croak in the given string.
A valid "croak" means a frog is printing 5 letters ‘c’, ’r’, ’o’, ’a’, ’k’ sequentially. The frogs have to print all five letters to finish a croak. If the given string is not a combination of valid "croak" return -1.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-11/Day-11--MinimumNumberOfFrogsCroaking-Shashank.cpp)

**Example 1:**
```
Input: croakOfFrogs = "croakcroak"
Output: 1 
Explanation: One frog yelling "croak" twice.
```

**Example 2:**
```
Input: croakOfFrogs = "crcoakroak"
Output: 2 
Explanation: The minimum number of frogs is two. 
The first frog could yell "crcoakroak".
The second frog could yell later "crcoakroak".
```
**Example 3:**
```
Input: croakOfFrogs = "croakcrook"
Output: -1
Explanation: The given string is an invalid combination of "croak" from different frogs.
```
**Example 4:**
```
Input: croakOfFrogs = "croakcroa"
Output: -1
```

**Constraints:**

`1 <= croakOfFrogs.length <= 10^5`
All characters in the string are: `'c', 'r', 'o', 'a' or 'k'`.


### 5. [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![Phone Number](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/images/img1.png)

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-11/Day-11--LetterCombinationsOfAPhoneNumber-Shashank.cpp)

**Example:**
```
Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
```
**Note:**

Although the above answer is in lexicographical order, your answer could be in any order you want.


## Day-12 Problems

### 1. [Finding middle element in a linked list](https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1)

Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-12/Day-12--FindingMiddleElement-Shashank.cpp)

**Example:**

**Input:**
```
2
5
1 2 3 4 5
6
2 4 6 7 5 1
```
**Output:**
```
3
7
```


### 2. [Nth node from end of linked list](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1)

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-12/Day-12--NthNode-Shashank.cpp)

**Example:**

**Input:**
```
2
9 2
1 2 3 4 5 6 7 8 9
4 5
10 5 100 5
```
**Output:**
```
8
-1
```


### 3. [Reverse a linked list](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1)

Given a linked list of N nodes. The task is to reverse this list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-12/Day-12--ReverseA-LinkedList-Shashank.cpp)

**Example:**

**Input:**
```
2
6
1 2 3 4 5 6
5
2 7 8 9 10
```
**Output:**
```
6 5 4 3 2 1
10 9 8 7 2
```


### 4. [Pairwise swap elements of a linked list](https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)

Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-12/Day-12--PairwiseSwap-Shashank.cpp)

**Example:**

**Input:**
```
1
8
1 2 2 4 5 6 7 8
```
**Output:**
```
2 1 4 2 6 5 8 7
```


### 5. [Remove duplicate element from sorted Linked List](https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1)

Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
**Note:** Try not to use extra space. Expected time complexity is O(N). The nodes are arranged in a ***sorted*** way.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-12/Day-12--RemoveDuplicateElements-Shashank.cpp)

**Example:**

**Input:**
```
2
4
2 2 4 5
5
2 2 2 2 2
```
**Output:**
```
2 4 5
2
```



## Day-13 Problems


### 1. [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)

Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.
You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.


#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--OddEvenLinkedList-Shashank.cpp)

**Example 1:**
```
Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL
```
**Example 2:**
```
Input: 2->1->3->5->6->4->7->NULL
Output: 2->3->6->7->1->5->4->NULL
```


### 2. [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)

Reverse a linked list from position m to n. Do it in one-pass.

**Note:** 1 ≤ m ≤ n ≤ length of list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--ReverseLinkedList2-Shashank.cpp)

**Example:**
```
Input: 1->2->3->4->5->NULL, m = 2, n = 4
Output: 1->4->3->2->5->NULLhttps://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--AddTwoNumbers-Shashank.cpp)

**Example:**
```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```
```

### 4. [Partition List](https://leetcode.com/problems/partition-list/)

Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

### 3. [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order** and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--AddTwoNumbers-Shashank.cpp)

**Example:**
```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```

### 4. [Partition List](https://leetcode.com/problems/partition-list/)

Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--PartitionList-Shashank.cpp)

**Example:**
```
Input: head = 1->4->3->2->5->2, x = 3
Output: 1->2->2->4->3->5
```

### 5. [Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
Return the linked list sorted as well.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-13/Day-13--RemoveDuplicatesFromSortedList-Shashank.cpp)

**Example 1:**
```
Input: 1->2->3->3->4->4->5
Output: 1->2->5
```
**Example 2:**
```
Input: 1->1->1->2->3
Output: 2->3
```


## Day-14 Problems


### 1. [Next larger element ](https://practice.geeksforgeeks.org/problems/next-larger-element/0)

Given an array A of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. If no such element exists, output -1 

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-14/Day-14--NextLargerElement-Shashank.cpp)

**Example:**

**Input:**
```
2
4
1 3 2 4
4
4 3 2 1
```
**Output:**
```
3 4 4 -1
-1 -1 -1 -1
```


### 2. [Queue using two Stacks ](https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1)

Implement a Queue using 2 stacks s1 and s2 

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-14/Day-14--QueueUsing2Stacks-Shashank.cpp)


**Example:**

**Input:**
```
2
5
1 2 1 3 2 1 4 2
4
1 2 2 2 1 4
```
**Output:**
```
2 3
2 -1
```

### 3. [Stack using two queues](https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1)

Implement a Stack using two queues q1 and q2.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-14/Day-14--StackUsing2Queue-Shashank.cpp)



**Example:**

**Input:**
```

2
5
1 2 1 3 2 1 4 2
4
1 2 2 2 1 3
```

**Output:**
```

3 4
2 -1
```


### 4. [Get minimum element from stack ](https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1)

You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.


#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-14/Day-14--MinElementFromStack-Shashank.cpp)

**Example:**

**Input:**
```
1
6
1 2 1 3 2 3 1 1 3   
```
**Output:**
```
3 2 1
```

### 5. [Parenthesis Checker](https://practice.geeksforgeeks.org/problems/parenthesis-checker/0)

Given an expression string exp. Examine whether the pairs and the orders of `“{“,”}”,”(“,”)”,”[“,”]”` are correct in exp.
For example, the program should print 'balanced' for `exp = “[()]{}{[()()]()}”` and 'not balanced' for `exp = “[(])”`


#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Day-14/Day-14--ParanthesisChecker-Shashank.cpp)

**Example:**

**Input:**
```
3
{([])}
()
([]
```
**Output:**
```
balanced
balanced
not balanced
```
