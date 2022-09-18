def factorial(x):
    if x<0:
        return("Invalid because number is negative")
    else:
        if x==1:
            return x
        else:
            return x*factorial(x-1)

    

num1=float(input("Enter First number :"))
num2=float(input("Enter Second number :"))
op=input("Enter Operation :")

if op == "+":
    print(num1 + num2)

elif op == "-":
    print(num1-num2)

elif op == "/":
    print(num1/num2)

elif op == "*":
    print(num1*num2)

else:
    print("Invalid Operation")

print("Factorial of first number is" , factorial(num1))

print("Factorial of second number is" , factorial(num2))