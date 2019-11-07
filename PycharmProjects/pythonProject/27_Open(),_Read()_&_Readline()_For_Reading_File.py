"""
"r" - open file for reading (default)
"w" - open file for writing
"x" - creates file if not exist
"a" - add more content to a file
"t" - text mode  (default)
"b" - binary mode
"+" - read and write
"""

print("reading content of a file as a text")
f=open("harry.txt","rt")
content=f.read()
print("1",content)
f.close()

print("reading some content of a file")
f=open("harry.txt")
content=f.read(5)
print("2",content)
f.close()

print("reading all line of a file")
f=open("harry.txt")
#content=f.read()   #reading character by character
#for line in content:
for line in f:
    print(line)
f.close()

print("reading line by line of file")
f=open("harry.txt")
print(f.readline())
print(f.readline())
f.close()

print("reading all lines in a list ")
f=open("harry.txt")
print(f.readlines())
f.close()

