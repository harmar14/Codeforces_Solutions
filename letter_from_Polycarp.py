n = int(input())
res = ''
for f in range(n):
    s1 = str(input())
    s2 = str(input())
    a=[]
    amass=[]
    a1=0
    b=[]
    bmass=[]
    b1=0
    k=0
    q=0
    v=s1[0]
    w=s2[0]
    for i in range(len(s1)):
        if (v!=s1[i]):
            a.append(k)
            amass.append(s1[i-1])
            a1+=1
            k=1
            v=s1[i]
        else:
            k+=1
    a.append(k)
    amass.append(s1[len(s1)-1])
    a1+=1
    for i in range(len(s2)):
        if (w!=s2[i]):
            b.append(q)
            bmass.append(s2[i-1])
            b1+=1
            q=1
            w=s2[i]
        else:
            q+=1
    b.append(q)
    bmass.append(s2[len(s2)-1])
    b1+=1
    err=0
    if (a1!=b1):
        err-=1000010
        res += 'NO\n'
    else:
        for i in range(a1):
            if (a[i]>b[i]) or (amass[i]!=bmass[i]):
                err+=1
    if (err==0):
        res += 'YES\n'
    elif (err>0):
        res += 'NO\n'
print(res)
