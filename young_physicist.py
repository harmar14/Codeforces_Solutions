n = int(input())
a=[]
for i in range(n):
    a.append([int (x) for x in input().split()])
 
x=0
y=0
z=0
for i in range(n):
    x += a[i][0]
    y += a[i][1]
    z += a[i][2]
if (x==0) and (y==0) and (z==0):
    print('YES')
else:
    print('NO')
