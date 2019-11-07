#list is mutable means can change able
grocery=["harpic","vim bar","detergent","bhindi","lolypop",5,8,7,6]
print(grocery)
numbers=[7,4,2,8,3,9,6]
#numbers.sort() #apply permanent changes
#numbers.reverse() #apply permanent changes
print(numbers)
print(numbers[3:])#[::-1] it reverse   #[::2] it skip one by one
print(max(numbers))#print(min(numbers))
numbers.append(1)#numbers.pop()
numbers.insert(3,66)#numbers.remove(9)
print(numbers)
#touple is immutable means not change able
tp=(9,2,5,3,7)# one value touple tp=(1,)
print(tp)
numbers[0]=99  #tp[0]=99 ERROR
print(numbers)
#swaping in python
a=5
b=9
a,b=b,a
print(a,b)