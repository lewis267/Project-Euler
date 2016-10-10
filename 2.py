def next(a, b):
    return a+b

def run():
    total=0
    a=0
    b=1

    while b < 4000000:
        temp = a
        a=b
        b=next(temp, b)
        if not b%2: total += b

    return total

print run()
