def factorial(n):
  if n == 0:
    return 1
  else:
    aux1 = factorial(n-1)
    f = n * aux1
    return f

dig = []
for char in str(factorial(100)):
    dig.append(int(char))

print(sum(dig))
