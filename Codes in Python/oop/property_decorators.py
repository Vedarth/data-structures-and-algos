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

	@fullname.setter
	def fullname(self, name):
		first, last = name.split()
		self.first, self.last = first, last

	@fullname.deleter
	def fullname(self):
		print("Delete Name {}".format(self.first))
		self.first = None
		self.last = None

emp_1 = Employee('Corey','Schafer',1000000)

emp_1.first = 'Jim'

emp_1.fullname = 'Jim Maa'



print(emp_1.first)
print(emp_1.email)
print(emp_1.fullname)

del emp_1.fullname
print(emp_1.first)