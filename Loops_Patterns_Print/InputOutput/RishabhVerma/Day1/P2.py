# Take a I/P number, print its table

# (eg: if n=3: Print: 3x1=3 3x2=6 ... 3x10=30)


number=int(input("Enter the number "))
print("Table of {} is : ".format(number))
for i in range(1,11):
        print( "{}x{}={}".format(number,i,number*i))
