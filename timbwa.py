class Employee:
    def __init__(self, name, age, serviceYear, salary):
        self.name = name
        self.age = age
        self.serviceYear = serviceYear
        self.salary = salary

    def getName(self):
        return self.name

    def getAge(self):
        return self.age

    def getServiceYear(self):
        return self.serviceYear

    def getSalary(self):
        return self.salary


emp = Employee("Christopher Timbwa", 42, 15, 85000.75)
print(emp.getName())
print(emp.getAge())
print(emp.getServiceYear())
print(emp.getSalary())

def __del__(self):
    print("Employee removed")
