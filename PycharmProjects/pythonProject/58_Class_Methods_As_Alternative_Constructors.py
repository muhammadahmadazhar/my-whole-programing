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
    @classmethod
    def fromStr(cls,string):
        # param=string.split("-")#it returns list so param is a list
        # return cls(param[0],param[1])
        return cls(*string.split("-"))#it is args

harry=Emp("imran",22)
marry=Emp("zubair",60)
charry=Emp.fromStr("charry-88")
#harry.leaves=1 #it creates an instance if not available an instance of harry not change class variable
harry.changeLeaves(9)#now instance variable is capable of changing class variables just as below
#Emp.leaves=10  # it changes class variables
print(harry.leaves)
print(marry.leaves)
print(charry.sal)