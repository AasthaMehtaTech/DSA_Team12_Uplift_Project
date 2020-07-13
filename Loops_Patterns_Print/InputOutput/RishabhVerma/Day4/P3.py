# Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.



num=int(input("Enter the number of Element"))
arr=input().split(" ")
for i in range(num):
      arr[i]=int(arr[i])

arr.sort()
for i in range(num):
      arr[i]=str(arr[i])
print(" ".join(arr))