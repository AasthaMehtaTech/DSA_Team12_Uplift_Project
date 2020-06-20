# Upward Star Triangle with n lines (n: I/P) (Eg: n=3)
# *
# * *
# * * *

lines=int(input("Enter the number of lines"))

for i in range (0,lines):
    for j in range(0,i+1):
         print("* ",end="")
    print("",end="\n")