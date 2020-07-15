# Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0. For extra description visit here



def setZero(arr,n):
           temp=[]
           for i in range(n):
                for j in range(n):
                     if(arr[i][j]==0):
                             temp.append([i,j])
           for i in range(len(temp)):
                    row=temp[i][0]
                    col=temp[i][1]
                    for j in range(n):
                           arr[row][j]=0
                           arr[j][col]=0
           print(arr)


a=[[1,0,1],[1,1,1],[1,0,1]]

setZero(a,3)
