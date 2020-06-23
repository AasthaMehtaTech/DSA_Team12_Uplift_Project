# Find the max absolute difference between 2 consecutive elements of array.
# Eg:
# I/P :
# 4
# 1 3 2 5
# O/P :
# 3
# Explanation : Differences : |1-3|=2, |3-2|=1, |2-5|=3. MAX DIFFERENCE : 3


number=int(input("Enter the total numbers : "))
arr=input("").split(" ")
for i in range(number):
        arr[i]=int(arr[i])

max=0

for i in range(number-1):
          diff=arr[i]-arr[i+1]
          if diff<0:
              diff*=-1
              if diff>max:
                  max=diff
print(max)