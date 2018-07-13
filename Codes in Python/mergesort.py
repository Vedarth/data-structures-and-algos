def merge(z, l, m, r):
        a,b= m-l+1,r-m
        x,y=[0]*a,[0]*b
        for i in range(a):
                x[i]= z[l+i]
        for j in range(b):
                y[j]= z[m+1+j]
        i,j,k = 0,0,l
        while i<a and j<b:
                if x[i]<=y[j]:
                        z[k]=x[i]
                        i+=1
                else:
                        z[k]=y[j]
                        j+=1
                k+=1
        while i<a:
                z[k]=x[i]
                i+=1
                k+=1
        while j<b:
                z[k]=y[j]
                j+=1
                k+=1
                

def mergesort(z, l ,r):
        if l<r:
                m = (l+(r-1))//2
                mergesort(z, l, m)
                mergesort(z, m+1, r)
                merge(z, l, m, r)

x = input().split()
x = [int(i) for i in x]
mergesort(x, 0, len(x)-1)
print(x)
"""a=[1,2,3]
b=[9,8,10]
print(merge(a,b))
"""
