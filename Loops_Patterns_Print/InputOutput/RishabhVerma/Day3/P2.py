# For an I/P array, find sum of squares of each element.
# Eg: I/P :
# 4
# 1 5 2 2
# O/P:
# 34
# Explanation :1^2+ 5^2+ 2^2 +2^2=1+25+2+2


number=int(input("Enter the total numbers : "))
arr=input("").split(" ")
for i in range(number):
        arr[i]=int(arr[i])
sum=0
for i in range(number):
        sum+=arr[i]**2
print(sum)