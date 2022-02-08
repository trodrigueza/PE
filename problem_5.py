ans = []
k = 232792560
while len(ans) == 0:
    nums = []
    for i in range(1, 21):
        if k % i!= 0:
            condition = False
            break
        else:
            condition = True
    if condition == True:
        ans.append(k)
    k += 1

print(*ans)
