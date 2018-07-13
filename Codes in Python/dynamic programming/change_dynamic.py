def change(amount,denominations):
    minimum = list()
    while amount!=0:
        if amount%denominations[i]==0:
            amount -= amount/denominations[i]
        i++
