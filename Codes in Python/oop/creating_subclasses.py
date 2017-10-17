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
		
class Developer(Employee):
	pass


dev_1 = Developer('Vedarth','Sharma',1000000)
dev_2 = Developer('Corey','Schafer',100000)

print(dev_1.email)
print(dev_2.email)