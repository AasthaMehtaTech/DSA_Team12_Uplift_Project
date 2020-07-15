# . Traverse Matrix Spirally.

# Input:  1    2   3   4
#         5    6   7   8
#         9   10  11  12
#         13  14  15  16
# Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10



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


a = [ [1,2,3,4],
      [5,6,7,8],
      [9,10,11,12],[13,14,15,16] ]

spiral(4,4,a)