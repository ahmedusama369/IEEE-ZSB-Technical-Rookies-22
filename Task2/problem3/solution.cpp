import random
n=random.randint(100, 999)
n=str(n)
print(n)
j=0
while(True):
    c=input()
    j=j+1
    if c==n:
        break
    hit=0
    misses=0
    for i in range(len(n)):
        for j in range(len(n)):
            if n[i]==c[j] and i==j:
                hit=hit+1
                break
            elif n[i]==c[j] and i!=j:
                misses=misses+1
                break
    print(hit,"hit",misses,"misses")
print(j)
