# 2.a. Rotate the matrix clock wise by 90 degree

# I/P: 
# 2 3 //no.  of rows & columns
# 1 2 3 
# 4 5 6
# O/P:
# 4 1 
# 5 2
# 6 3


rowColumn=input("ENter the row and column").split(" ")
row=int(rowColumn[0])
column=int(rowColumn[1])
arr=[]

for i in range(row):
         arr.append([])
         for j in range(column):
                   arr[i].append(int(input("")))
                

for j in range(column):
             for i in range(row-1,-1,-1):
                    print(arr[i][j],end=" ")
             print()
               
 