from math import factorial, ceil
import sys
def f_sum(a, b): # f sum optimization
    sum = 0
    for i in range(a, b+1):
        sum += factorial(i)
    return sum

input = sys.stdin.read()
data = input.split()
for i in range(int(data[0])):
	L,R,K = int(data[3*i+1]), int(data[3*i+2]), int(data[3*i+3])
	print(ceil(f_sum(L,R)/K) - 1)