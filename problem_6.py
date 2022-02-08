sotq = []
for i in range(101):
    sotq.append(i ** 2)

sots = []
for i in range(101):
    sots.append(i)

print(sum(sots) ** 2 - sum(sotq))
