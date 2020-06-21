# Take N(number of rows), print following pattern (N=4)
#     1           1
#     1 2       2 1
#     1 2 3   3 2 1
#     1 2 3 4 3 2 1


lines=int(input("ENter the lines"))

for i in range(1,lines+1):
          for j in range(1,i+1):
                 print(j,end=" ")
          for j in range(i,lines):
                 print("* ",end="")
          for j in range(lines,i+1,-1):
                 print("* ",end="")
          for j in range(i,0,-1):
                 if(j==lines):
                        continue
                 print(j,end=" ")
          print("")