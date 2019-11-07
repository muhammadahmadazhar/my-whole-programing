class Employee:
    leaves=8
    def details(self):
        return f"Name is {self.name} and age is {self.age}"

mangr=Employee()
mangr.name="ali"
mangr.age=55

clrk=Employee()
clrk.name="usman"
clrk.age=33

print(mangr.details())
print(clrk.details())

class Emp:
    def __init__(self,aname,asal):
        self.name=aname
        self.sal=asal
    def details(self):
        return f"Name is {self.name} and age is {self.sal}"

harry=Emp("imran",22)
print(harry.details())