class Employee:
    company_name = "TechCorp"       # class variable

    def __init__(self, name, salary):
        self.__name = name          # private variable
        self.__salary = salary

    # Getter
    def get_salary(self):
        return self.__salary

    # Setter with validation
    def set_salary(self, new_salary):
        if new_salary > 0:
            self.__salary = new_salary
        else:
            print("Invalid salary!")

    # Instance method
    def show(self):
        print(f"Name: {self.__name}")
        print(f"Salary: {self.__salary}")

    # Class method
    @classmethod
    def change_company(cls, new_name):
        cls.company_name = new_name

    # Static method
    @staticmethod
    def greet():
        print("Welcome to the company!")


# -------- Inheritance --------
class Manager(Employee):
    def __init__(self, name, salary, department):
        super().__init__(name, salary)
        self.department = department

    # Polymorphism: overriding method
    def show(self):
        super().show()
        print(f"Department: {self.department}")


# ---------- MAIN ----------
Employee.greet()

e1 = Employee("Savari", 50000)
m1 = Manager("Prafull", 75000, "Computer Engineering")

e1.show()
print()

m1.show()
print()

print("Company:", Employee.company_name)

Employee.change_company("NextGenTech")
print("Updated Company:", Employee.company_name)
