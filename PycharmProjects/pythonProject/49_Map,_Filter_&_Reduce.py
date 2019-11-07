num=["3","55","34","98"]
num=list(map(int,num))

# for i in range(len(num)):
#     num[i] =int(num[i])

num[2] = num[2] + 1
print(num[2])

def sq(x):
    return x*x

no=[2,3,4,5,6,7,8,9]
# square=list(map(sq,no))
square=list(map(lambda x: x*x,no))
print(square,end=" ")
print()

def greater(n):
    return n>5
# gr_than_5=list(filter(greater,no))
gr_than_5=list(filter(lambda n: n>5,no))
print(gr_than_5)

numb=0
for i in no:
    numb=numb+i
print(numb)

from functools import reduce
prod=reduce(lambda x,y:x+y,no)
print(prod)