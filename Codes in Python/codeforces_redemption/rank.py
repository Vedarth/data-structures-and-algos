# Uses python3
import sys
count = 0

def inversionsCount(x):
    global count
    midsection = len(x) // 2
    leftArray = x[:midsection]
    rightArray = x[midsection:]
    if len(x) > 1:
        inversionsCount(leftArray)
        inversionsCount(rightArray)

        i, j = 0, 0
        a = leftArray; b = rightArray
        for k in range(len(a) + len(b) + 1):
            if a[i] >= b[j]:
                x[k] = a[i]
                i += 1
                if i == len(a) and j != len(b):
                    while j != len(b):
                        k +=1
                        x[k] = b[j]
                        j += 1
                    break
            elif a[i] < b[j]:
                x[k] = b[j]
                print(len(a), a, i, b, j, x)
                count += (len(a) - i)
                j += 1
                if j == len(b) and i != len(a):
                    while i != len(a):
                        k+= 1
                        x[k] = a[i]
                        i += 1                    
                    break
    print(x)
    return x
if __name__ == '__main__':
    input = sys.stdin.read()
    a = list(input.strip())
    inversionsCount(a)
    print(count)
