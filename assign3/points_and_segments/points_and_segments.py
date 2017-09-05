# Uses python3
import sys

def fast_count_segments(starts, ends, points):
    cnt = dict()
    #write your code here
    counter = 0
    i = 0
    pands = sorted(starts+ends+points)
    for point in pands:
        if point in starts:
            starts.remove(point)
            counter+=1
        elif point in points:
            cnt[str(point)] = counter
            i+=1
        elif point in ends:
            counter-=1
            ends.remove(point)
    return cnt

def naive_count_segments(starts, ends, points):
    cnt = [0] * len(points)
    for i in range(len(points)):
        for j in range(len(starts)):
            if starts[j] <= points[i] <= ends[j]:
                cnt[i] += 1
    return cnt

if __name__ == '__main__':
    input = sys.stdin.read()
    data = list(map(int, input.split()))
    n = data[0]
    m = data[1]
    starts = data[2:2 * n + 2:2]
    ends   = data[3:2 * n + 2:2]
    points = data[2 * n + 2:]
    #use fast_count_segments
    cnt2 = fast_count_segments(starts, ends, points)
    for x in points:
        print(cnt2[str(x)], end=' ')