class Employee:
	
	num_of_emps = 0
	raise_amount = 1.04	

	def __init__(self, first,last,pay):
		self.first = first
		self.last = last
		self.pay = pay
		self.email = first.lower() + '.' + last.lower() + '@company.com'

		Employee.num_of_emps += 1

	def fullname(self):
		return '{} {}'.format(self.first,self.last)

	def apply_raise(self):
		self.pay = int(self.pay * self.raise_amount)

	@classmethod
	def set_rate_amt(cls, amount):#cls is like self for class.
		cls.raise_amount = amount#it takes input and updates the attributes of class. it can be run using instance as well.

	@classmethod
	def from_string(cls, emp_str):
		first, last, pay = emp_str.split('-')
		return cls(first,last,int(pay))
		
emp_1 = Employee('Vedarth','Sharma',1000000)
emp_2 = Employee('Corey','Schafer',100000)

emp_1.set_rate_amt(1.05)

emp_str_1 = "John-Doe-70000"

new_emp_1 = Employee.from_string(emp_str_1)
print(new_emp_1.fullname(),new_emp_1.pay)