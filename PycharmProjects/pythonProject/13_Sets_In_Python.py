list=[]
s=set(list)
print(type(s))
s.add(1)
s.add(2)
s1=s.intersection({1,2,3})
print(s,s1)
print(len(s))
print(max(s))  #print(min(s))