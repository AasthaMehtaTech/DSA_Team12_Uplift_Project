# 2.b. Rotate the matrix anti-clock wise by 90 degree

# I/P:
# 2 3 //no.  of rows & columns
# 1 2 3
# 4 5 6
# O/P:
# 3 6
# 2 5
# 1 4



rowColumn=input("ENter the row and column").split(" ")
row=int(rowColumn[0])
column=int(rowColumn[1])
arr=[]

for i in range(row):
         arr.append([])
         for j in range(column):
                   arr[i].append(int(input("")))


for i in range(column-1,-1,-1):
        for j in range(row):
                print(arr[j][i],end=" ")
        print()