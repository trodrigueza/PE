n, p = 9009, 2
factors = []
while p <= n:
    if n%p == 0:
        factors.append(p)
        n /= p
    else:
        p += 1

print(factors)
    