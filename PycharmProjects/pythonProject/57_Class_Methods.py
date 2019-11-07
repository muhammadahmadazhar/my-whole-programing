class Emp:
    leaves=8
    def __init__(self,aname,asal):
        self.name=aname
        self.sal=asal
    def details(self):
        return f"Name is {self.name} and age is {self.sal}"
    @classmethod
    def changeLeaves(cls,newleaves):
        cls.leaves=newleaves

harry=Emp("imran",22)
marry=Emp("zubair",60)

#harry.leaves=1 #it creates an instance if not available an instance of harry not change class variable
#Emp.leaves=10  # it changes class variables
print(harry.leaves)
print(marry.leaves)