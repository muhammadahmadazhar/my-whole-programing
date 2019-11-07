l=[int,float,"harry",88,76,45,83,55,36,44,56,]
for item in l:
    if str(item).isnumeric() and item>50:
        print("greater=",item)