import inflect

strs = []
for i in range(1, 1001):
    p = inflect.engine()
    l = p.number_to_words(i)
    for char in l:
        if char != '-' and char != ' ' and char != ',':
            strs.append(char)
            
print(len(strs))