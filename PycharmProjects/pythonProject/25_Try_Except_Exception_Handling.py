num1=input("enter first no")
num2=input("enter second no string")
try:
    print(int(num1)+int(num2))
except Exception as e:
    print(e)