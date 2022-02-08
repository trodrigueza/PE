fibo, k, i = [1, 1], 0, 1
while len(str(fibo[-1])) < 1000:
    fibo.append(fibo[-1] + fibo[k])
    k += 1
    i += 1

print(i + 1)
