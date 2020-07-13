# Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.


num=int(input("Enter the number of Element"))
arr=input().split(" ")
for i in range(num):
      arr[i]=int(arr[i])

k=int(input("Enter K:"))

arr.sort()
print(arr[k-1])