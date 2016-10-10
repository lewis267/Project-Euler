from math import sqrt

x = 600851475143
a = int(sqrt(x))


for i in range(a, x):
    if not x%i:
        print i
