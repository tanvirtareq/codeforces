from sys import stdin
input=stdin.readline
for _ in range(int(input())):
    n=input()
    a=list(sorted(map(int, stdin.readline().split())))
    f=0
    prv=a[0]
    for i in a:
        if abs(prv-i)>1:
            f=1
        prv=i
    if f==0:
        print("YES")
    else:
        print("NO")
