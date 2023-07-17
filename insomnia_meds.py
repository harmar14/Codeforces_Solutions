k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
p = 0
for i in range(d):
    if (((i+1)%k==0) or ((i+1)%l==0) or ((i+1)%m==0) or ((i+1)%n==0)):
        p+=1
print(p)
