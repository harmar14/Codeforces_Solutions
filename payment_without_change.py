q = int(input())
res = ''
for t in range (q):
    a,b,n,s = [int(x) for x in input().split()]
    p = s // n
    if (p > a):
        r = n * (p - a) + (s % n)
    else:
        r = s % n
    if (r > b):
        res = res + 'NO' + '\n'
    else:
        res = res + 'YES' + '\n'
print(res)
