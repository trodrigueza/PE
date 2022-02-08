multiples_3_and_5 = []
for i in range(1000):
    if i % 3 == 0 or i % 5 == 0:
        multiples_3_and_5.append(i)

print(sum(multiples_3_and_5))
