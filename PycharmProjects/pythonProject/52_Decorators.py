def fun1():
    print("subscribe now")
del fun1
# fun2=fun1()   # it calls the function bcz of braces() which we dont want here
# fun2=fun1
# fun2()

def funret1(n):
    if n==0:
        return print
    if n==1:
        return int
print(funret1(0))

def executor(func):
    func("this")

executor(print)

def decorator1(func1):
    def nowexec():
        print("now executing")
        func1()
        print("executed")
    return nowexec
@decorator1
def harry():
    print("harry is a good boy")

# harry=decorator1(harry)    it is equal to @decorator1
harry()