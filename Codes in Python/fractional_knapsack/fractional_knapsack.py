# Uses python3
import sys

def get_optimal_value(capacity, weights, values):
    value = 0.
    rat = list()
    # write your code here
    for i in range(len(weights)):
        rat.append([values[i]/weights[i],values[i],weights[i]])
    rat.sort(reverse=True)
    for r in rat:
        if capacity == 0:
            break
        if (capacity-r[2])>0:
            value = value + r[1]
            capacity = capacity - r[2]
        else:
            value = value + r[0]*capacity
            capacity = 0

    return value


if __name__ == "__main__":
    data = list(map(int, sys.stdin.read().split()))
    n, capacity = data[0:2]
    values = data[2:(2 * n + 2):2]
    weights = data[3:(2 * n + 2):2]
    opt_value = get_optimal_value(capacity, weights, values)
    print("{:.10f}".format(opt_value))
