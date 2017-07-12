# Uses python3
import sys

def fib(n):
    if n == -1:
        return 0
    if n== 0:
        return 1
    a=0
    b=1
    for i in range(n):
        c = (a%10 + b%10)%10
        a = b%10
        b = c%10
        if i == n-1:
            return c%10
    
input = sys.stdin.read()
token = input.split()
n = int(token[0])
print(fib(n-1))
