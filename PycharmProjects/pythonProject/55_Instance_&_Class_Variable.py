class Employee:
    name="ali"

mangr=Employee()
clrk=Employee()

mangr.name="usman"
mangr.age=50
clrk.height=13

print("manager=",mangr.__dict__)
print("clark=",clrk.__dict__)
print("class=",Employee.__dict__)

mangr.name="usman"
print(mangr.name)
print(Employee.name)