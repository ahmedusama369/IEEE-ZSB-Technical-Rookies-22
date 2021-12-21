n=int(input())
dic={}
deg=[]
for i in range(2*n):
    if i%2==0:
        y=input()
    else:
        x=float(input())
        if x not in dic.keys():
            dic[x]=[]
        deg.append(x)
        dic[x].append(y)
deg.sort()
m=min(deg)
for i in range(len(deg)):
    if deg[i]>m:
        mm=deg[i]
        break
dic[mm].sort()
for i in range(len(dic[mm])):
    print(dic[mm][i])
