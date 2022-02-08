powers = []
for i in range(1,1001):
    powers.append(i ** i)

print(str(sum(powers))[-10:])