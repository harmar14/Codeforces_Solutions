t = int(input())
res = ''
for i in range(t):
    n,k=[int(x) for x in input().split()]
    if ((n % k) > (k // 2)):
        res = res + str(n-(n % k)+(k // 2)) + '\n'
    else:
        res = res + str(n) + '\n'
print(res)
