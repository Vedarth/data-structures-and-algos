#Uses python3

import sys

def largest_number(a):
    #write your code here
    b = list()
    while a:
        max_digit=None
        for number in a:
            if max_digit is None:
                max_digit = number
                continue
            num_list,max_list=list(number),list(max_digit)
            if num_list[0]>max_list[0]:
                max_digit = number
            if int(''.join(num_list+max_list))>int(''.join(max_list+num_list)):
                max_digit = number
        b.append(max_digit)
        a.remove(max_digit)
    a = []
    for num in b:
        a.append((''.join(num)))
    res = ""
    for x in a:
        res += x
    return res

if __name__ == '__main__':
    input = sys.stdin.read()
    data = input.split()
    a = data[1:]
    print(largest_number(a))
    
