# Build a prefix array from given I/P array.
# Eg:
# I/P :
# 4
# 1 3 2 5
# O/P :
# 1 4 6 11
# Explanation : 1 1+3 1+3+2 1+3+2+5


number=int(input("Enter the total numbers : "))
arr=input("").split(" ")
for i in range(number):
        arr[i]=int(arr[i])
sum=0

for i in range(number):
          sum+=arr[i]
          print(sum,end=" ")
