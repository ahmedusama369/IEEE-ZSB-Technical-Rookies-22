import random
n=random.randint(100,999)
n=str(n)
j=0
while(True):
    c=input()
    j=j+1
    if c==n:
        break
    hit=0
    misses=0
    for i in range(len(n)):
        if c[i]==n[i]:
            hit=hit+1
        elif c[i] in n and c[i]!=n[i]:
            misses=misses+1
   
    print(hit,"hit",misses,"misses")
print(j)
