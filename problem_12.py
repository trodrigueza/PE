def factors(n):
    return list(
        factor for i in range(1, int(n**0.5) + 1) if n % i == 0
        for factor in (i, n//i)
    )

triangle_numbers = [1]
ans = []

for i in range(2, 1000000):
    triangle_numbers.append(triangle_numbers[-1] + i)

for i in triangle_numbers:  
    if len(factors(i)) > 500:
        ans.append(i)
        break

print(*ans)
