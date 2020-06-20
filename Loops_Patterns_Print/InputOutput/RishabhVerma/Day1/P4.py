# Downward Star Triangle with n lines (Eg: n=4)
#  * * * *
#  * * *
#  * *
#  *

lines=int(input("Enter the lines : "))
for i in range(lines,0,-1):
     for j in range(i,0,-1):
          print("* ",end="")
     print("",end="\n")