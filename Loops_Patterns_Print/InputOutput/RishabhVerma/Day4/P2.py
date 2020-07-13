# Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
# Eg:
# Input:
# 5
# 1 2 3 -2 5
# Output:
# 9




num=int(input("Enter the number of Elements"))
arr=input().split(" ")
for i in range(num):
     arr[i]=int(arr[i])
max=0
tillHere=0

for i in range(num):
     tillHere=tillHere+arr[i]
     if max<tillHere:
          max=tillHere
     if(tillHere<0):
          tillHere=0
print("Max sum is:%d"%max)


