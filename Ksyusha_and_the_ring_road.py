n, m = [int(x) for x in input().strip().split()]
a = [int(x) for x in input().strip().split()]
k = a[0] - 1
for i in range(1, m):
    if (a[i]>a[i-1]):
        k = k + a[i] - a[i-1]
    elif (a[i]<a[i-1]):
        k = k + n - a[i-1] + a[i]
print(k)
