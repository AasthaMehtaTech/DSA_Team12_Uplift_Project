# Given an array A of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
# Eg:
# Input:
# 10
# 1 2 3 4 5 6 7 8 10
# Output:
# 9

N=int(input("Enter the size of array"))
arr=input("").split(" ")
for i in range(N-1):
        arr[i]=int(arr[i])
arr.sort()

for i in range(N-1):
       if arr[i]!=(i+1):
             print(i+1)