# Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a Program which prints all pairs of numbers which sum to target.


num=int(input("Enter the number of Element"))
arr=input().split(" ")
for i in range(num):
      arr[i]=int(arr[i])

k=int(input("Enter Sum:"))


for i in range(num):
     for j in range(i+1,num):
         if arr[i]+arr[j]==k:
              print("({},{})".format(arr[i],arr[j]))



