n, k = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
for i in range(n):
    if (k!=0) and (a[i]<0):
        a[i]= (-1)*a[i]
        k-=1
    else:
        break
if (0 in a):
    print(sum(a))
else:
    if (k!=0):
        if (k%2==1):
            if (i==0):
                a[0] = -1*a[0]
            elif (abs(a[i])>abs(a[i-1])):
                a[i-1] = -1*a[i-1]
            else:
                a[i] = -1*a[i]
    print(sum(a))
