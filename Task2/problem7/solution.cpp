s1=input()
s2=input()
c=0
for i in range(0,len(s1),len(s2)-1):
    if s1[i:i+len(s2)]==s2:
        c=c+1
        
r=0
for j in range(0,len(s1),len(s2)):
    if s1[j:j+len(s2)]==s2:
        r=r+1
if(c>r):
    print(c)
else:
    print(r)


    
    





