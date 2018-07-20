print("Enter the string you want to generate all the permutations of")

s = list(input().strip())

def permute(s, l, r):
    if l==r:
        print(s)
    else:        
        for i in range(l, r):
            s[i], s[l] =  s[l], s[i]
            permute(s, l+1, r)
            s[i], s[l] = s[l], s[i]

permute(s, 0, len(s))

#print(s, s[0], len(s))
