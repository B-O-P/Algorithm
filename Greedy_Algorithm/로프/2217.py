n = int(input())
arr = []
for i in range(n):
    temp = int(input())
    arr.append(temp)

arr.sort()

max = arr[0] * n
for i in range(n):
    if max < arr[i] * (n-i):
        max = arr[i] * (n-i)

print(max)