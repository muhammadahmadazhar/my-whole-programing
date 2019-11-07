str="harry is a good boy"
print("length of string is ",len(str))
print("1   ",str[9])
print("2   ",str[6:10])
print("3   ",str[6:])# if dont write it  use last etc
print("4   ",str[0:10:2])#skip one character
print("5   ",str[-4:])#form end reverse
#0  ,1  ,2  ,3  ,4  ,5  ,6  ,7
#-19,-18,-17,-16
print("6   ",str[-19:-15])
print("7   ",str[::-1])# rverse whole string
print("8   ",str.count("o"))
print("9   ",str.endswith("boy"))
print("10   ",str.capitalize())# capitalize first letter only
print("11   ",str.find("is"))
print("12   ",str.replace("is","are"))
