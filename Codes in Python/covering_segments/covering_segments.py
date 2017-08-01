# Uses python3
import sys
from collections import namedtuple

Segment = namedtuple('Segment', 'start end')

def optimal_points(segments):
    points = []
    seg=[]
    for s in segments:
        seg.append((s.end,s.start))
    last = 0
    seg.sort()
    for s in seg:
        if points == []:
            points.append(s[0])
            last = s[0]
            continue
        if s[0]<=last:
            continue
        if s[0]>last:
            if s[1]<=last:
                continue
            if s[1]>last:
                points.append(s[0])
                last = s[0]
    return points

if __name__ == '__main__':
    input = sys.stdin.read()
    n, *data = map(int, input.split())
    segments = list(map(lambda x: Segment(x[0], x[1]), zip(data[::2], data[1::2])))
    points = optimal_points(segments)
    print(len(points))
    for p in points:
        print(p, end=' ')
