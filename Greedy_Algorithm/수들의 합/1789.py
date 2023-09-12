s = int(input())
count = 1
current = 2
next = 1

while next <= s:
    next += current
    current += 1
    if next <= s:
        count+=1

print(count)