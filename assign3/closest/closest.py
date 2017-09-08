#Uses python3
from __future__ import generators
import sys
import math
def closestpair(L):
	def square(x): return x*x
	def sqdist(p,q): return square(p[0]-q[0])+square(p[1]-q[1])
	
	
	best = [sqdist(L[0],L[1]), (L[0],L[1])]
	def testpair(p,q):
		d = sqdist(p,q)
		if d < best[0]:
			best[0] = d
			best[1] = p,q


	def merge(A,B):
		i = 0
		j = 0
		while i < len(A) or j < len(B):
			if j >= len(B) or (i < len(A) and A[i][1] <= B[j][1]):
				yield A[i]
				i += 1
			else:
				yield B[j]
				j += 1


	def recur(L):
		if len(L) < 2:
			return L
		split = len(L)//2
		splitx = L[split][0]
		L = list(merge(recur(L[:split]), recur(L[split:])))

		E = [p for p in L if abs(p[0]-splitx) < best[0]]
		for i in range(len(E)):
			for j in range(1,8):
				if i+j < len(E):
					testpair(E[i],E[i+j])
		return L
	
	L.sort()
	recur(L)
	return best[1]


input = sys.stdin.read()
data = list(map(int, input.split()))
n = data[0]
x = data[1::2]
y = data[2::2]
a = list(zip(x, y))
if len(a) == 2:
        print("{0:.9f}".format(math.sqrt((x[0]-x[1])**2 + (y[0]-y[1])**2)))
else:
        (p,q) = closestpair(a)
        print("{0:.9f}".format(math.sqrt((p[0]-q[0])**2 + (p[1]-q[1])**2)))
