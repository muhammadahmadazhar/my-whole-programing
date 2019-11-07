def fun(*args,**kwargs):#we can use any name
    print(type(args))
    for item in args:
        print(item,end=" ")
    for key,value in kwargs.items():
        print(f"{key} get up in the {value}")

li=["a","b","c","d","e"]
di={"ahmad":"M","ali":"E","usman":"N"}
fun(*li,**di)

