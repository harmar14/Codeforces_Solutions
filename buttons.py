n=int(input())
i=1
k=0
while n!=0:
  k+=i*(n-1)
  if n==1:
    k+=i
  i+=1
  n-=1
print(k)
