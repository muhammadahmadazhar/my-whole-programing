d2={"harry":"burger","ahmad":"fish","ali":"roti",
    "usman":{
          "M":"slice","E":"tea","N":"milk"}}
d2["amjad"]="beef"
print(d2)
d3=d2.copy()#now copy function can not remove from d2.it deletes from copy means in from d3
del d3["harry"]
print(d2)
print(d2.get("amjad"))
print(d2.keys())
print(d2.items())
d2.update({"420":"kill"})
print(d2)
fi=input()
print(d2.get(fi))