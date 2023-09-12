city = int(input())
dist = list(map(int, input().split()))
cost = list(map(int, input().split()))
select = cost[0]
total = select * dist[0]

for i in range(1, city-1):
    if cost[i] < select:
        select = cost[i]
        total += select * dist[i]
    else:
        total += select * dist[i]

print(total)