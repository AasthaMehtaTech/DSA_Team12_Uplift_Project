# 3.Take N(number of rows), print following pattern (N=5)

# 1 2 3 4 5
# 1 2 3 4 *
# 1 2 3 * * *
# 1 2 * * * * *
# 1 * * * * * * *


lines=int(input("Enter the lines"))

for i in range(lines):
        for j in range(1,lines-i+1):
               print('{} '.format(j),end='')
        for j in range(0,2*i-1):
               print("* ",end="")
        print("")
