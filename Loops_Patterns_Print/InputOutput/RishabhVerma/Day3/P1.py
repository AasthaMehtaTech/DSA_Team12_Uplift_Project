# Take n elements as I/P, print max, min, sum of them.
# Eg: I/P:
# 5
# 1 5 3 2 4
# O/P :
# Max= 5
# Min= 1
# Sum= 15


number=int(input("Enter the total numbers : "))
arr=input("").split(" ")
for i in range(number):
        arr[i]=int(arr[i])
arr.sort()
if len(arr)==0:
       print("No element found")
else:
    print("min %d"%arr[0])
    print("max %d"%arr[len(arr)-1])
    sum=0
    for i in range(number):
           sum+=arr[i]
    print("sum",sum)