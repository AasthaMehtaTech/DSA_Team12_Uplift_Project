# Print clockwise spirally increasing pattern
# I/P:
# 5 // Matrix Dimension: 5x5
#


def spiral(r,c,arr):
        s=0
        b=0
        while s<r and b<c:
                for i in range(b,c):
                     print(arr[s][i],end=" ")
                s+=1

                for i in range(s,r):
                     print(a[i][c-1],end=" ")
                c-=1

                if s<r:
                    for i in range(c-1,b-1,-1):
                         print(a[r-1][i],end=" ")
                    r-=1
                if b<c:
                    for i in range(r-1,s-1,-1):
                         print(a[i][b],end=" ")
                    b+=1


a = [ [1,2,3,4,5],
      [16,17,18,19,6],
      [15,24,25,20,7],[14,23,22,21,8],[13,12,11,10,9] ]

spiral(5,5,a)