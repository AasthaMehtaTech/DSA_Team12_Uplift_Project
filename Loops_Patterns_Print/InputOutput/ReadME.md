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
5
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
[1, 1, 1]

O/P:
[0, 0, 0],
[1, 0, 1],
[0, 0, 0]
```

## Level Up Array:
Next let's dive into sorting techniques:<br>
More Practise Problems on Arrays:[here](https://www.interviewbit.com/courses/programming/topics/arrays/)

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
