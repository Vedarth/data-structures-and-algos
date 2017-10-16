from string import Template

def Main():
    cart = []
    cart.append(dict(item="Coke", price=8, qty=2))
    cart.append(dict(item="Cake", price=12, qty=1))
    cart.append(dict(item="Pizza", price=32, qty=4))

    t = Template("$qty x $item = $price")
    total = 0
    print("Cart")
    for data in cart:
        print (t.substitute(data))
        total += data["price"]
        print("Total:",total)

if __name__=="__main__":
    Main()
