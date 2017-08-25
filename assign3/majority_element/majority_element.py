# Uses python3
import sys

def get_majority_element(a, left, right):
    num_count = dict()
    for x in a:
        num_count[x] = num_count.get(x,0) + 1
    if max(num_count.values())>n//2:
        return 1
    else:
        return -1

if __name__ == '__main__':
    input = sys.stdin.read()
    n, *a = list(map(int, input.split()))
    if get_majority_element(a, 0, n) != -1:
        print(1)
    else:
        print(0)
