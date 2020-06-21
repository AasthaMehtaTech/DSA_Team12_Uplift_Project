# Take N(number of rows), print the following pattern( ex: N=4)
#     0
#     1 1
#     2 3 5
#     8 13 21 34


lines=int(input("Enter the lines"))
a=1
b=1
for i in range(lines):
      if i==0:
          print(0)
      if i==1:
          print("1 1")
      if i>1:
          for j in range(0,i+1):
               c=a+b
               print(c,end=" ")
               a=b
               b=c
          print("")