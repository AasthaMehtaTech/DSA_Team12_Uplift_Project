# 3.b. Upward centered (Eg: n=3)

#      *
#     * *
#    * * *


lines=int(input("Enter the lines : "))
for i in range(0,lines):
       for j in range(lines,i,-1):
            print(" ",end="")
       for k in range(0,i+1):
            print("* ",end="")
       print("",end="\n")