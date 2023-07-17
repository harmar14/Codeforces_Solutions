n, m, a = [int(x) for x in input().split()]
r1 = 0
r2 = 0
res = 0
r1 = n // a
if (n % a != 0):
    r1 += 1
r2 = m // a
if (m % a != 0):
    r2 += 1
res = r1 * r2
print(res)
