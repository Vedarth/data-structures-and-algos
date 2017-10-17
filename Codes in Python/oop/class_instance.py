class Employee:
	def __init__(self, first,last,pay):#Here self is the variable that we will be using inside the class to refer to the instance
		self.first = first
		self.last = last
		self.email = first.lower() + '.' + last.lower() + '@company.com'
		self.pay = pay
#Here we have declared the necessary class variables.

emp_1 = Employee('Corey','Schafer',1000000)
emp_2 = Employee('Vedarth','Sharma',10000000)


print(emp_1)
print(emp_2)

print(emp_1.email)
print(emp_2.email)
