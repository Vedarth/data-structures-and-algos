# Uses python3
import sys

def fib(n):
    a=0
    b=1
    for i in range(n):
        c = a + b
        a = b
        b = c
        if i == n-1:
            return c
    
input = sys.stdin.read()
token = input.split()
n = int(token[0])
print(fib(n-1))
