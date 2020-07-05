# Week 3


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
