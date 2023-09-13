import heapq
N = int(input())
hq = []

for i in range (N):
    temp = int(input())
    heapq.heappush(hq, temp)

total = 0
temp_a = 0
temp_b = 0
while len(hq) != 0:
    temp_a = heapq.heappop(hq)
    temp_b = heapq.heappop(hq)
    total += temp_a + temp_b
    if (len(hq)) == 0:
        break
    heapq.heappush(hq, temp_a + temp_b)
print(total)
"""
10 20 30 40 + 30
30 30 40 + 60
60 40 + 100
100
----
10 20 40 + 30
30 40 + 70
70
"""