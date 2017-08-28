#library

from library import Base

assert hassattr(Base, 'foo'), "you broke it, you idiot!"


class Derived(Base):
	def bar(self):
		return self.foo()
