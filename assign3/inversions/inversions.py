# Uses python3
import sys
def global_d():
	global d
	d = 0

def merge(a,b):
    """ Function to merge two arrays """
    c = []
    global d
    while len(a) != 0 and len(b) != 0:
        if a[0] < b[0]:
            c.append(a[0])
            a.remove(a[0])
            d+=1
        else:
            c.append(b[0])
            b.remove(b[0])
    if len(a) == 0:
        c += b
    else:
        c += a
    return c

# Code for merge sort

def mergesort(x):
    """ Function to sort an array using merge sort algorithm """
    global d
    if len(x) == 0 or len(x) == 1:
        return x
    else:
        middle = len(x)//2
        a = mergesort(x[:middle])
        b = mergesort(x[middle:])
        return merge(a,b)
if __name__ == '__main__':
    input = sys.stdin.read()
    global_d()
    n, *a = list(map(int, input.split()))
    b = n * [0]
    mergesort(a)
    print(d//2)
