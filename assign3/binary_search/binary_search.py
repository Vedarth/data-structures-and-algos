# Uses python3
import sys

def binary_search(a, x):
    left, right = 0, len(a)
    while left<=right:
        mid = left + (right-left)//2
        try:
            a[mid]
        except:
            return -1
        else:
            pass
        finally:
            pass
        if a[mid] == x:
            return mid
        elif a[mid] < x:
            left = mid+1
        elif a[mid] > x:
            right = mid-1
        else:
            return -1
    return -1

def linear_search(a, x):
    for i in range(len(a)):
        if a[i] == x:
            return i
    return -1

if __name__ == '__main__':
    input = sys.stdin.read()
    data = list(map(int, input.split()))
    n = data[0]
    m = data[n + 1]
    a = data[1 : n + 1]
    a.sort()
    for x in data[n + 2:]:
        print(binary_search(a, x), end = ' ')
