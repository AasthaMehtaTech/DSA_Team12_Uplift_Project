Week 1 Problems: 

Tutorial link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/ <br>

### Guidelines To Contribute: 
Create/Upload soln file with Name: 
```
DayNumber_ProblemNumber_YourName.extension✔️(Prefer this)            Eg:  Day1_P1_Aastha.cpp 
Or
ProblemName_YourName.cpp .java or .py                                Eg:  UpwardTriangle_Aastha.cpp
```

Questions to be solved: 

# Pattern Resource

(Patterns Eg Source Codes)[https://www.edureka.co/blog/30-pattern-programs-in-java/] <br>
Patterns using Cpp: https://www.programiz.com/cpp-programming/examples/pyramid-pattern , 
         https://www.educba.com/star-patterns-in-c-plus-plus/<br>
Some more questions: https://www.faceprep.in/c/pattern-programs-in-c/ <br>
Additional questions: https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-c/ <br>

## Day 1 - June 7,2020

1. Take a I/P number, print its square

2. Take a I/P number, print its table 

(eg: if n=3: 
Print: 3x1=3
       3x2=6
       ...
       3x10=30)

3. Upward Star Triangle with n lines (n: I/P) (Eg: n=3)
```
*
* *
* * *

```
3.b. Upward centered (Eg: n=3)
```
     *
    * *
   * * *
```     

4. Downward Star Triangle with n lines     (Eg: n=4)
```
 * * * *
 * * *
 * *
 *
```
5. Kaju Katli (For odd I/P only)(Eg:n=3)
```
     *
    * *
   * * *
    * *
     *

```
## Day 2 Problems
1. Take N(number of rows), print the following pattern( ex: N=4)
``` 
    0
    1 1
    2 3 5
    8 13 21 34
 ```

 2. Take N(number of rows), print following pattern (N=4)
  ``` 
      1           1
      1 2       2 1
      1 2 3   3 2 1
      1 2 3 4 3 2 1
   ```
  3.Take N(number of rows), print following pattern (N=5)
  ``` 
  1 2 3 4 5
  1 2 3 4 *
  1 2 3 * * *
  1 2 * * * * *
  1 * * * * * * *
  ```
 4.Take the following as input: number <br>
 Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is <br>      defined as follows. 
 ```A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if. <br>
abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + …. <br>
1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4 <br>
371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3 <br>
OUTPUT: Print boolean output for each testcase. <br>
"true" if the given number is an Armstrong Number, else print "false". <br>
sample case
input-371
output-true
```
5. Given a binary number ,find out its decimal representation. 
For eg 000111 in binary is 7 in decimal.
Input Format <br>
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number. <br>
Output Format <br>
N lines,each containing a decimal equivalent of the binary number. <br>

Sample Input <br>
 ```
     4
     101
     1111
     00110
     111111
```
Sample output <br>
``` 
    5
    15
    6
    63
 ```

## Day 3

1. Take n elements as I/P, print max, min, sum of them. 
```
Eg: I/P:
5
1 5 3 2 4
O/P : 
Max= 5
Min= 1
Sum= 15
```
2. For an I/P array, find sum of squares of each element. 
```
Eg: I/P : 
4
1 5 2 2
O/P:
30
Explanation :1^2+ 5^2+ 2^2 +2^2=1+25+2+2
```
3. Build a prefix array from given I/P array. 
```
Eg: 
I/P : 
4
1 3 2 5
O/P :
1 4 6 11
Explanation : 1 1+3 1+3+2 1+3+2+5
```
4. Find the max absolute difference between 2 consecutive elements of array. 
```
Eg: 
I/P : 
4
1 3 2 5
O/P :
3
Explanation : Differences : |1-3|=2, |3-2|=1, |2-5|=3. MAX DIFFERENCE : 3
```
## Day 4 
1. Given an array A of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
```
Eg:
Input: 
10
1 2 3 4 5 6 7 8 10
Output: 
9
```
2. Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
```
Eg: 
Input:
5
1 2 3 -2 5
Output:
9
```
3. Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.
```
Eg:
Input:
5
0 2 1 2 0
Output:
0 0 1 2 2
 ```
4. Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
```
Eg:
Input:
6
7 10 4 3 20 15
3
Output:
7
Explanation:3rd smallest element in the given array is 7.
```
5. Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a Program which prints all pairs of numbers which sum to target.
```
Eg:
Input: 
5
1 3 4 2 5 
5
Output:
1 and 4
2 and 3
Explanation: Find any pair of elements in the array which has sum equal to target element and print them.
```
## Day 5 ( 2D Arrays )

1. Find Zigzag Sum (For Square Matrices Only)
```
I/P:
3
1 2 3 
4 7 8 
5 9 1
O/P :
28
Explanation: 1+2+3+7+5+9+1=28
```
2.a. Rotate the matrix clock wise by 90 degree
```
I/P: 
2 3 //no.  of rows & columns
1 2 3 
4 5 6
O/P:
4 1 
5 2
6 3
```
2.b. Rotate the matrix anti-clock wise by 90 degree
```
I/P:
2 3 //no.  of rows & columns
1 2 3 
4 5 6
O/P:
3 6
2 5 
1 4
```
3. Print clockwise spirally increasing pattern
```
I/P:
5 // Matrix Dimension: 5x5
O/P:
```
![Spiral Pattern](https://github.com/AasthaGithub/DSA_Team12_Uplift_Project/blob/master/Loops_Patterns_Print/InputOutput/clockwiseSpiral.JPG)
<br>
4. Traverse Matrix Spirally.
```
Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
```
5. Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.
[For extra description visit here](https://www.interviewbit.com/problems/set-matrix-zeros/)
```
I/P:
[1, 0, 1],
[1, 1, 1], 
[1, 0, 1]

O/P:
[0, 0, 0],
[1, 0, 1],
[0, 0, 0]
```

## Level Up Array:
Next let's dive into sorting techniques:<br>
More Practise Problems on Arrays:[here](https://www.interviewbit.com/courses/programming/topics/arrays/)

## Resources related to Searching and Sorting : 
https://docs.google.com/document/d/1vR5BLH5borpibYjQ0R6y00zgo-RP5JdkejS_3ilU-DI/edit?usp=sharing  <br>
https://codeburst.io/algorithms-i-searching-and-sorting-algorithms-56497dbaef20
## Day 6 Problems
1. Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.
```
Eg:
Input:
5
5 5 4 6 4
Output:
 4 4 5 5 6
 Explanation: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.
```
2. Given an integer array and a non-negative integer k,count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j] = k.
```
Ex:
Input:
5 
1 5 4 1 2
0
Output:
1
Explanation: There is only one pair with difference 0 i.e (1,1)
```
3. Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.
Hint: Think Binary search!!
```
Eg:
Input:
5
4 5 1 2 3
2
 Output:
 3
 Explanation:
 The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.
 ```
 4. Given an integer x. The task is to find the square root of x. If x is not a perfect square, then return floor(√x).
 ```
 Eg:
 Input:
 5
 Output:
 2
 Explanation:
 Since, 5 is not perfect square, so floor of square_root of 5 is 2.
 ```
 5. Given a matrix mat[] of size n x m, where every row and column is sorted in increasing order, and a number x is given. The task is to find whether element x is present in the matrix or not.
 Expected Time Complexity: O(m+n)
 ```
 Eg: 
 Input:
 3 3
3 30 38 44 52 54 57 60 69
62
Output:
0
Explanation: 62 is not present in the matrix, so output is 0.
```
## Day 7- Arrays & Maths & Pointer concepts:
Note: Try to run your code on the links provided so that you know it passes all corner test cases as well & then upload your soln here.

Task: [Pointer Resources](https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)

1. One Missing Number in O(1) space & O(n) time.
```
Input: [3,0,1]
Output: 2
Input: [9,6,4,2,3,5,7,0,1]
Output: 8
```
Hint: Sum of n natural numbers formula.<br>

2. Find the duplicate in array of N integers. It could be repeated more than once. 
[Run it here](https://leetcode.com/problems/find-the-duplicate-number/)
```
Input: [1,3,4,2,2]
Output: 2
Input: [2,2,2,4,2]
Output: 2

```
[Reference Soln & learn about Time & Space Complexity of every Approach.](https://leetcode.com/problems/find-the-duplicate-number/solution/)<br>

3. For a given array print Repeating & missing no. in O(1) space & O(n) time. [Run here](https://www.interviewbit.com/problems/repeat-and-missing-number-array/)
```
Input:[3 1 2 5 3] 
Output:[3, 4]
```
<br>

4. [Merge 2 sorted arrays without extra space](https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/)<br>

5. [Merge 2 intervals](https://www.interviewbit.com/problems/merge-intervals/)<br>

6. [Merge 2 overlapping intervals](https://www.interviewbit.com/problems/merge-overlapping-intervals/)<br>

Now let's Dive into some strings and Character array Problems. <br> 
Resources to read from: https://docs.google.com/document/d/1GKOcQCGw3T4kSD0G5dckz1jlJfrWh4ZvXmCW05NGbCE/edit?usp=sharing


## Day 8 Problems
1. [Remove character](https://practice.geeksforgeeks.org/problems/remove-character/0)
2. [Remove all Duplicates from string](https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string/0) <br>
3.[Merge two strings](https://practice.geeksforgeeks.org/problems/merge-two-strings/0) <br>
4. [Anagram](https://practice.geeksforgeeks.org/problems/anagram/0) 
5. [Check for subsequence](https://practice.geeksforgeeks.org/problems/check-for-subsequence/0)

## End of week 1:

[Hackerearth problems Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/)

*Choose Filter very-easy, easy then proceed with a bit advanced problems as below.

1. [Roy_Profile_Pic ](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/)

2. [BricksMaths](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/)

3. [Seat_Arr_Logic](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/)

4. [Make AP](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/)

5. [Split_house](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/)

## Further

(100 Coding  Problems for future)[https://codeburst.io/100-coding-interview-questions-for-programmers-b1cf74885fb7]
