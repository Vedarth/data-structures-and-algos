class Employee:
	def __init__(self, first,last,pay):#Here self is the variable that we will be using inside the class to refer to the instance
		self.first = first
		self.last = last
		self.email = first.lower() + '.' + last.lower() + '@company.com'
		self.pay = pay

	def fullname(self):#if you don't put the self argument and not use this function no error will come but as soon as you try to access this function error will come
		return('{} {}'.format(self.first, self.last))
#Here we have declared the necessary class variables.

emp_1 = Employee('Corey','Schafer',1000000)
emp_2 = Employee('Vedarth','Sharma',10000000)


print(emp_1.fullname())
print(emp_2.fullname())
print(Employee.fullname(emp_2))