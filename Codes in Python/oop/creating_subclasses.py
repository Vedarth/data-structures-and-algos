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


dev_1 = Developer('Vedarth','Sharma',1000000, 'Python')
dev_2 = Developer('Corey','Schafer',100000, 'Java')

print(dev_1.fullname(), dev_1.prog_lang)

#print(dev_1.pay)
#dev_1.apply_raise()
#print(dev_1.pay)  