f=open("harry.txt")
print(f.tell())
print(f.readline())
print(f.tell())
print(f.seek(8))
print(f.readline())