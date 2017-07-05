a_range = 1000
b_range = 1000
c_range = 1000

'''
Rules:
    {a,b,c} (subset of) Natural Numbers

    a < b < c
    a^2 + b^2 = c^2
    a + b + c = 1000

Return:
    a * b * c
'''
# ------------------------
# inequality method
# ------------------------
def inequality(b):
    first = ((2000*b - 1000000)/(b-1000) + b)
    second = ((1000*b - 500000)/(b-1000) + 2*b)
    third = 1000
    return first < second and second < third

b = -1

for b in range(500):
    if inequality(b):
        a = 1000 * ((b - 500) / (b - 1000))
        if not a.is_integer(): continue
        a = int(a)
        c = 1000 - a - b
        print("a:", a, ", b:", b, ", c:", c, ", product:", a*b*c)
exit(0)

# ------------------------
# brute force method
# ------------------------
for a in range(a_range):
    for b in range(a+1, b_range):
        for c in range(b+1, c_range):
            if a < b and b < c:
                if a * a + b * b == c * c:
                    if a + b + c == 1000:
                        print("a:", a, 
                                ", b:", b, 
                                ", c:", c, 
                                ", product:", a*b*c)
                        exit(0)
