d = open('data13.txt')
do = []
for i in d:
    do.append(int(i.replace('\n', '').split()[0]))

dig = []
for num in do:
    dig.append(num)

print(str(sum(dig))[:10])
