def merge(x, left, middle,right):
    left_array = x[left:middle]
    right_array = x[middle:right]
    k, l = 0, 0
    
    


def mergesort(x, low, hi):
	#Find middle
    middle = low//2
    #Call mergesort for left part
	mergesort(x,low,middle)
    #Call merge sort for right part
    mergesort(x, middle+1, r)
    merge(x, left, middle, right) 


x = input("Enter the array you want to merge sort:- ")
mergesort(x,0,len(x))
print(x)