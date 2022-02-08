list1 = [i for i in range(100,1000)]
list2 = [i for i in range(100,1000)]
palindromes = []
for i in list1:
    for j in list2:
        if str(i * j) == str(i * j)[::-1]:
            palindromes.append(i * j)

max = 0
for i in palindromes:
    if i > max:
        max = i

print(max)

# 913 * 993 = 906609
