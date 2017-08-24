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
def chk(ans):
    if ans < 0:
        ans = ans +10
    return ans

if __name__ == '__main__':
    input = sys.stdin.read();
    from_, to = map(int, input.split())
    start = (from_+1)%pisano(10)
    ans1 = fib(start-1,10)-1
    ans1 = chk(ans1)
    to = (to+2)%pisano(10)
    ans2 = fib(to-1,10)-1
    ans2=chk(ans2)
    ans = ans2 - ans1
    ans  =chk(ans)
    print(ans)
