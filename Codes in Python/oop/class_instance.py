class Employee:
	pass

emp_1 = Employee()

emp_2 = Employee()

emp_1.first = 'Corey'
emp_1.last = 'Schafer'
emp_1.email = 'corey.schafer@company.com'
emp_1.pay = 1000000

emp_2.first = 'Vedarth'
emp_2.last = 'Sharma'
emp_2.email = 'vedarth.sharma@company.com'
emp_2.pay = 10000000
print(emp_1)
print(emp_2)

print(emp_1.email)
print(emp_2.email)
