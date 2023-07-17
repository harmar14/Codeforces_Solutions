a=[]
x=0
y=0
for i in range(5):
    a.append([int(i) for i in input().split()])
for i in range(5):
    for j in range(5):
        if (a[i][j]==1):
            x=i
            y=j
            break
print(abs(x-2)+abs(y-2))
