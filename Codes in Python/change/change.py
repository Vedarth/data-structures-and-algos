# Uses python3
import sys

def get_change(m):
    #write your code here
    n = 0
    n=n+m//10+(m%10)//5+(m%5)
    m = n
    return m

if __name__ == '__main__':
    m = int(sys.stdin.read())
    print(get_change(m))
