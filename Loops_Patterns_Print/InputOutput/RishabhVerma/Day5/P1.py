#  Find Zigzag Sum (For Square Matrices Only)
#  I/P:
#  3
#  1 2 3
#  4 7 8
#  5 9 1
#  O/P :
#  28
#  Explanation: 1+2+3+7+5+9+1=28

num=int(input("Enter the num"))

arr=[]
for i in range(num):
        arr.append([])
        for j in range(num):
               arr[i].append(int(input()))
sum=0              
for i in range(num):
         sum=sum+arr[i][num-1-i]
for i in range(num-1):
         sum=sum+arr[0][i]
for i in range(1,num):
         sum=sum+arr[num-1][i]

print(sum)

          

