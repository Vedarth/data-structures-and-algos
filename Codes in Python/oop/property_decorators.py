class Employee:
	def __init__(self, first,last,pay):#Here self is the variable that we will be using inside the class to refer to the instance
		self.first = first
		self.last = last

	@property
	def email(self):
		return('{}.{}@company.com'.format(self.first.lower(), self.last.lower()))

	@property
	def fullname(self):
		return('{} {}'.format(self.first, self.last))

emp_1 = Employee('Corey','Schafer',1000000)

emp_1.first = 'Jim'

print(emp_1.first)
print(emp_1.email)
print(emp_1.fullname)