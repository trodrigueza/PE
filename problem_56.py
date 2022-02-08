max = 0
for i in range(100):
    for n in range(100):
        digits = []
        num = i ** n
        for char in str(num):
            digits.append(int(char))
        if sum(digits) > max:
            max = sum(digits)

print(max)