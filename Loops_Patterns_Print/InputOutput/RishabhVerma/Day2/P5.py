# Given a binary number ,find out its decimal representation. For eg 000111 in binary is 7 in decimal. Input Format
# The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.
# Output Format
# N lines,each containing a decimal equivalent of the binary number.
# Sample Input

#     4
#     101
#     1111
#     00110
#     111111
# Sample output

#     5
#     15
#     6
#     63

noOfTestCases=int(input("Enter the number of Test cases: "))
a=[]

for i in range(noOfTestCases):
         a.insert(i,(input("")))
for i in range(len(a)):
          temp=int(a[i])
          sum=0
          j=0
          while temp:
                 one=temp%10
                 sum=sum+(one*(2**j))
                 j+=1
                 temp=int(temp/10)
          print(sum)
