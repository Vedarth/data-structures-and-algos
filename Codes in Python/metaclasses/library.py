#library

import builtins

class Base:
	def foo(self):
		return self.bar()


old_bc = __build_class__


def my_bc(fun, name, base=None, **kw):
	if base is Base:
		print('check if bar method is defined')
	if base is not None:
		return old_bc(fun, name, base, **kw)
	return old_bc(fun, name, base, **kw)



builtins.__build_class__ = my_bc
