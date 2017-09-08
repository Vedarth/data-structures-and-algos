import time
x = list()
for i in range(500000):
    x.append(i)


def main(x):
    print("Hello")


start_time = time.time()
main(x)
#print(x)
print("--- %s seconds ---" % (time.time() - start_time))

