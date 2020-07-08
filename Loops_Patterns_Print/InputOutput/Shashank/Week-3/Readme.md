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
