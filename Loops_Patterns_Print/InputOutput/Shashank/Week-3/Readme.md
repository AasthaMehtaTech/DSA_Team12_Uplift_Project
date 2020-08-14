# Week 3


## Day-15

### 1. [Simplify Path](https://leetcode.com/problems/simplify-path/)

Given an absolute path for a file (Unix-style), simplify it. Or in other words, convert it to the canonical path.
In a UNIX-style file system, a period . refers to the current directory. Furthermore, a double period .. moves the directory up a level.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-15/Day-15--SimplifyPath-Shashank.cpp)

**Example :**
```
Input: "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.
```

### 2. [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

Evaluate the value of an arithmetic expression in Reverse Polish Notation.
Valid operators are +, -, *, /. Each operand may be an integer or another expression.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-15/Day-15--EvaluateRPN-Shashank.cpp)

**Example :**
```
Input: ["2", "1", "+", "3", "*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
```

### 3. [Remove K Digits](https://leetcode.com/problems/remove-k-digits/)

Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-15/Day-15--RemoveKDigit-Shashank.cpp)
**Example :**
```
Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
```

### 4. [132 Pattern](https://leetcode.com/problems/132-pattern/)

Given a sequence of n integers a1, a2, ..., an, a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj. Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-15/Day-15--132Pattern-Shashank.cpp)

**Example :**
```
Input: [1, 2, 3, 4]
Output: False
Explanation: There is no 132 pattern in the sequence.
```

### 5. [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)

Given a circular array (the next element of the last element is the first element of the array), print the Next Greater Number for every element. The Next Greater Number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, output -1 for this number.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-15/Day-15--NextGreaterElement2-Shashank.cpp)

**Example :**
```
Input: [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number; 
The second 1's next greater number needs to search circularly, which is also 2.
```


## Day-16 Problems


### 1. [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

Given a linked list, determine if it has a cycle in it.
To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-16/Day-16--LinkedListCycle-Shashank.cpp)

**Example :**
```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.
```

![CLL](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/images/cll.png)


### 2. [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

Write a program to find the node at which the intersection of two singly linked lists begins.
For example, the following two linked lists:

![IOTLL](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/images/Iotll.png)


#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-16/Day-16--IntersectionOfTwoLinkedList-Shashank.cpp)

**Example :**
![IOTLL-EX1](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/images/IOTLL-EX1.png)
```
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8
Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
```


### 3. [Delete without head pointer ](https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1)

You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-16/Day-16--DeleteWithoutHeadPointer-Shashank.cpp)

**Example:**
```
Input:
2
2
1 2
1
4
10 20 4 30
20
Output:
2
10 4 30
```


### 4. [Sorted insert for circular linked list](https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1)

Given a sorted circular linked list, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-16/Day-16--SortedInsertForCircularLinkedList-Shashank.cpp)

**Example:**
```
Input:
2
3
1 2 4
2
4
1 4 7 9
5

Output:
1 2 2 4
1 4 5 7 9
```


### 5. [Given a linked list of 0s, 1s and 2s, sort it](https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1)

Given a linked list of **N** nodes where nodes can contain values **0s**, **1s**, and **2s** only. The task is to segregate **0s**, **1s**, and **2s** linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

#### [My Solution](oject/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-16/Day-16--SortingGivenLikedList-Shashank.cpp)

**Example:**
```
Input:
2
8
1 2 2 1 2 0 2 2
4
2 2 0 1
Output:
0 1 1 2 2 2 2 2
0 1 2 2
```


## Day-17 Problems


### 1. [Two Sum](https://leetcode.com/problems/two-sum/)

Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.
You may assume that each input would have **exactly** one solution, and you may not use the same element twice.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-17/Day-17--TwoSum-Shashank.cpp)

**Example:**
```
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```


### 2. [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

Given an array of integers and an integer **k**, you need to find the total number of continuous subarrays whose sum equals to **k**.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-17/Day-17--SubarraySumEqualsK-Shashank.cpp)

**Example:**
```
Input:nums = [1,1,1], k = 2
Output: 2
```


### 3. [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/)

Given a string, sort it in decreasing order based on the frequency of characters.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-17/Day-17--SortCharactersByFrequency-Shashank.cpp)

**Example:**
```
Input:
"tree"
Output:
"eert"
Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
```


### 4. [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)

Given a string **s** and a **non-empty** string **p**, find all the start indices of **p**'s anagrams in s.
Strings consists of lowercase English letters only and the length of both strings **s** and **p** will not be larger than 20,100.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-17/Day-17--FindAllAnagrams-Shashank.cpp)

**Example :**
```
Input:
s: "cbaebabacd" p: "abc"
Output:
[0, 6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
```


### 5. [Contiguous Array](https://leetcode.com/problems/contiguous-array/)

Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-17/Day-17--ContiguousArray-Shashank.cpp)

**Example:**
```
Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
```


## Day-18 Problems

### 1. [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)

Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-18/Day-18--IsomorphicString-Shashank.cpp)

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


### 2. [H-index](https://leetcode.com/problems/h-index/)

Given an array of citations (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-18/Day-18--H-Index-Shashank.cpp)

**Example:**
```
Input: citations = [3,0,6,1,5]
Output: 3 
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had 
             received 3, 0, 6, 1, 5 citations respectively. 
             Since the researcher has 3 papers with at least 3 citations each and the remaining 
             two with no more than 3 citations each, her h-index is 3.
```


### 3. [Find Common Characters](https://leetcode.com/problems/find-common-characters/)

Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (**including duplicates**).

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-18/Day-18--FindCommonCharacters-Shashank.cpp)

**Example 1:**
```
Input: ["bella","label","roller"]
Output: ["e","l","l"]
```


### 4. [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)

Given two arrays, write a function to compute their intersection.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-18/Day-18--IntersectionOfTwoArrays-Shashank.cpp)

**Example 1:**
```
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
```


### 5. [Longest Harmonious Subsequence](https://leetcode.com/problems/longest-harmonious-subsequence/)

We define a harmounious array as an array where the difference between its maximum value and its minimum value is exactly 1.
Now, given an integer array, you need to find the length of its longest harmonious subsequence among all its possible subsequences.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-18/Day-18--LongestHarmoniousSubsequence-Shashank.cpp)

**Example 1:**
```
Input: [1,3,2,2,5,2,3,7]
Output: 5
Explanation: The longest harmonious subsequence is [3,2,2,2,3].
```



## Day-19 Problems

## Hash Maps

### 1. [Four Sum](https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers/0)

Given an array A of size N, find all combination of four elements in the array whose sum is equal to a given value K. For example, if the given array is {10, 2, 3, 4, 5, 9, 7, 8} and K = 23, one of the quadruple is “3 5 7 8” (3 + 5 + 7 + 8 = 23).

The output should contain only unique quadrples  For example, if input array is {1, 1, 1, 1, 1, 1} and K = 4, then output should be only one quadrple {1, 1, 1, 1}.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-19/Day-19--FindSumOfAllNumbers-Shashank.cpp)

**Example:**
```
Input:
2
5 3
0 0 2 1 1 
7 23
10 2 3 4 5 7 8

Output:
0 0 1 2 $
2 3 8 10 $2 4 7 10 $3 5 7 8 $
```

### 2. [Swapping & making Sum Equal](https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal/0)

Given two arrays of integers, write a program to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-19/Day-19--SwappingPairsMakeSumEqual-Shashank.cpp)

**Example:**
```
Input:
2
6 4
4 1 2 1 1 2
3 6 3 3
4 4
5 7 4 6
1 2 3 8

Output:
1
1
```

## Graphs

### 3. [Clone Graph](https://leetcode.com/problems/clone-graph/)

Given a reference of a node in a connected undirected graph.
Return a deep copy (clone) of the graph.
Each node in the graph contains a val (int) and a list (List[Node]) of its neighbors.
```
class Node {
    public int val;
    public List<Node> neighbors;
}
```

#### [My Solution](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/Week-3/Day-19/Day-19--CloneGraph-Shashank.cpp)

![Clone Graph](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/Shashank/images/clone%20graph.png)

**Example:**
```
Input: adjList = [[2,4],[1,3],[2,4],[1,3]]
Output: [[2,4],[1,3],[2,4],[1,3]]
Explanation: There are 4 nodes in the graph.
1st node (val = 1)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
2nd node (val = 2)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
3rd node (val = 3)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
4th node (val = 4)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
```
