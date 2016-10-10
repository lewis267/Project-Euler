n = 1000
total = 0
for i in range(n):
    if not i%3 or not i%5: total += i
print total
