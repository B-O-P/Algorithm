T = int(input())
m = [300,60,10]
c = [0,0,0]

for i in range(3):
    if T >= m[i]:
        c[i] += T / m[i]
        T = T%m[i]

if T == 0:
    print(f"{int(c[0])} {int(c[1])} {int(c[2])}")
else:
    print(-1)