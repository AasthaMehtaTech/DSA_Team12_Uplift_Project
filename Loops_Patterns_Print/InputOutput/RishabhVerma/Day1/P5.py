# Kaju Katli (For odd I/P only)(Eg:n=3)
#      *
#     * *
#    * * *
#     * *
#      *


lines=int(input("Enter the odd input lines: "))

for i in range(0,lines):
          for j in range(lines,i,-1):
              print(" ",end="")
          for j in range(0,i+1):
              print("* ",end="")
          print("")
for i in range(0,lines-1):
       for j in range(0,i+2):
           print(" ",end="")
       for k in range(lines-1,i,-1):
           print("* ",end="")
       print("")