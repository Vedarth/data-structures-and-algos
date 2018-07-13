class Employee:
	
	num_of_emps = 0
	raise_amount = 1.04	

	def __init__(self, first, last, pay):
		self.first = first
		self.last = last
		self.pay = pay
		self.email = first.lower() + '.' + last.lower() + '@company.com'

		Employee.num_of_emps += 1

	def fullname(self):
		return '{} {}'.format(self.first,self.last)

	def apply_raise(self):
		self.pay = int(self.pay * self.raise_amount)
		
class Developer(Employee):
	raise_amount = 1.05

	def __init__(self, first, last, pay, prog_lang):
		super().__init__(first, last, pay)#Or Employee.__init__(first, last, pay)
		self.prog_lang = prog_lang

class Manager(Employee):
	def __init__(self, first, last, pay, employees=None):
		super().__init__(first, last, pay)
		if employees is None:
			self.employees = []
		else:
			self.employees = employees

	def add_emp(self, emp):
		if emp not in self.employees:
			self.employees.append(emp)

	def remove_emp(self, emp):
		if emp in self.employees:
			self.employees.remove(emp)

	def print_emps(self):
		for emp in self.employees:
			print('-->', emp.fullname())

dev_1 = Developer('Vedarth','Sharma',1000000, 'Python')
dev_2 = Developer('Corey','Schafer',100000, 'Java')

mgr_1 = Manager('Sue','Su',90000,[dev_2])
mgr_1.add_emp(dev_1)
mgr_1.print_emps()
mgr_1.remove_emp(dev_1)
print(mgr_1.email)
mgr_1.print_emps()

print(isinstance(mgr_1, Manager))
print(isinstance(mgr_1, Employee))
print(isinstance(mgr_1, Developer))
print('='*15)
print(issubclass(Manager, Employee))
print(issubclass(Developer, Employee))
print(issubclass(Manager, Developer))
#print(dev_1.fullname(), dev_1.prog_lang)

#print(dev_1.pay)
#dev_1.apply_raise()
#print(dev_1.pay)  