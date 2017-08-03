# Uses python3
import sys

def optimal_summands(n):
    summands = []
    #write your code here
    tot = 0
    for i in range(1,n+1):
        summands.append(i)
        tot = tot + i
        if(tot>=n):
            break
    if tot==n:
        return summands
    else:
        prev = summands.pop()
        last = sum(summands)
        try:
            summands[-1]= summands[-1]+n-last
        except:
            summands.append(prev-2+n-last)
    return summands

if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    summands = optimal_summands(n)
    print(len(summands))
    for x in summands:
        print(x, end=' ')
