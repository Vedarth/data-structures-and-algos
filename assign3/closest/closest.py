#Uses python3
import sys
import math

def minimum_distance(x, y):
    #write your code here
    dist = list()
    for i in range(len(x)):
        dist.append((x[i]**2 + y[i]**2)**0.5)
    coord = list(zip(x,y,dist))
    coord.sort()
    distance = None
    for i in range(len(coord)-1):
        #if distance is None or distance > (dist[i+1]-dist[i]) :
        #    distance = (dist[i+1]-dist[i])
        if x
    return distance

if __name__ == '__main__':
    input = sys.stdin.read()
    data = list(map(int, input.split()))
    n = data[0]
    x = data[1::2]
    y = data[2::2]
    print("{0:.9f}".format(minimum_distance(x, y)))
