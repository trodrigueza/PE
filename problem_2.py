fibo, k = [1, 2], 0
while fibo[-1] < 4000000:
    fibo.append(fibo[-1] + fibo[k])
    k += 1

even_fibo = []
for i in fibo:
    if i%2 == 0:
        even_fibo.append(i)

print(sum(even_fibo))
