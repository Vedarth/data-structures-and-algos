# Uses python3
import sys

def fib(n,m):
    if n == -1:
        return 0
    if n== 0:
        return 1
    a=0
    b=1
    for i in range(n):
        c = (a + b)%(m)
        a = b
        b = c
        if i == n-1:
            return c%m
def pisano(m):
    a=0
    b=1
    c=a+b
    for i in range(m*m):
        c=(a+b)%m
        a,b=b,c
        if a==0 and b==1:
            return i+1

if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    num = (n+2)%pisano(10)
    ans=fib(num-1,10)-1
    if ans < 0:
        ans = ans +10
    print(ans)
