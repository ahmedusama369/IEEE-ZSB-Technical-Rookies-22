n=int(input())
m=[]
for i in range(n):
    row=list(map(int,input().split()))
    m.append(row)
sum1=0
sum2=0
x=0
y=n-1
for i in range(n):
    for j in range(n):
        if(i==j):
            sum1=sum1+m[i][j]
        if i==x and j==y:
            sum2=sum2+m[i][j]
            x=x+1
            y=y-1
print(abs(sum1-sum2))
