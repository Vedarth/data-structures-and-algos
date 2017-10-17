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

dev_1 = Developer('Vedarth','Sharma',1000000, 'Python')
dev_2 = Developer('Corey','Schafer',100000, 'Java')