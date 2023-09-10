n = int(input())
rest = 1000 - n

coin = [500,100,50,10,5,1]
count = 0

for i in range(6):
    while rest >= coin[i]:
        rest -= coin[i]
        count+=1
    
print(count)