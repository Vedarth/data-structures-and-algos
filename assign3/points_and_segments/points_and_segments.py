# Uses python3
import sys

def fast_count_segments(starts, ends, points):
    cnt = dict()
    #write your code here
    counter = 0
    pands = list(zip(starts,['a_start']*len(starts)))+list(zip(ends,['c_end']*len(ends)))+list(zip(points,['b_point']*len(points)))
    pands.sort()
    for point in pands:
        if point[1] == 'a_start':
            counter+=1
        elif point[1] == 'b_point':
            cnt[point[0]] = counter
        elif point[1] == 'c_end':
            counter-=1
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
    for point in points:
        print(cnt2[point], end = ' ')