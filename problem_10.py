n, primes = 2760000, [0]
integers = list(range(n))

i = 2
while primes[-1] < 2000000:
    if integers[i] != False:
        primes.append(integers[i])
        for k in range(i, n, i):
            integers[k] = False
    i += 1
print(primes[:-1])
print(sum(primes[:-1]))
    