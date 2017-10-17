class Employee:
	
	num_of_emps = 0
	raise_amount = 1.04	

	def __init__(self, first,last,pay):
		self.first = first
		self.last = last
		self.pay = pay
		self.email = first.lower() + '.' + last.lower() + '@company.com'

		Employee.num_of_emps += 1

	def fullname():
		return '{} {}'.format(self.first,self.last)

	def apply_raise(self):
		self.pay = int(self.pay * self.raise_amount)
		
emp_1 = Employee('Vedarth','Sharma',1000000)
emp_2 = Employee('Corey','Schafer',100000)
Employee.raise_amount = 1.04
emp_1.raise_amount=1.05
emp_2.apply_raise()
emp_1.apply_raise()
print(emp_2.pay, emp_1.pay, Employee.num_of_emps, emp_1.num_of_emps)

