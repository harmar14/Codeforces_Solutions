a=input().split()
n=int(a[0])
m=int(a[1])
days=0
i=1
while i<=n:
  days+=1
  if days%m==0:
    n+=1
  i+=1
print(days)
