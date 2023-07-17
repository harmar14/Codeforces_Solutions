n = int(input())
a = []
err = 0
for i in range(n):
    a.append(list(input()))
for i in range(1, n-1):
    for j in range(1, n-1):
        if (a[i][j]=='#'):
            if (a[i+1][j]=='#') and (a[i][j+1]=='#') and (a[i-1][j]=='#') and (a[i][j-1]=='#'):
                a[i+1][j]='.'
                a[i][j+1]='.'
                a[i-1][j]='.'
                a[i][j-1]='.'
                a[i][j]='.'
for i in range(n):
    for j in range(n):
        if (a[i][j]=='#'):
            err = 1
            break
if (err == 1):
    print('NO')
else:
    print('YES')
