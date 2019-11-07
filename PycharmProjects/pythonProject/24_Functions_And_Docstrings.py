def fun(a, b):
    """This is a function which calculate average of two numbers"""
    avg=(a+b)/2
    return avg

rt=fun(5,7)
print(rt)
print(fun.__doc__)#if we write first in function a comment it will become a Docstring