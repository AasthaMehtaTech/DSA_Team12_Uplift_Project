# .Take the following as input: number
# Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is
# defined as follows.

# abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + …. <br>
# 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4 <br>
# 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3 <br>
# OUTPUT: Print boolean output for each testcase. <br>
# "true" if the given number is an Armstrong Number, else print "false". <br>
# sample case
# input-371
# output-true


number=input("Enter the number: ")
leng=len(number)
a=int(number)
sum=0

while a:
    once=a%10
    sum+=once**leng
    a=int(a/10)

if sum==int(number):
    print("true")
else:
    print("false")