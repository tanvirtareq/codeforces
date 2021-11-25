from sys import stdin
input=stdin.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    mina=min(a)
    minb=min(b)
    c=0
    for i in range(n):
        c=c+max(a[i]-mina, b[i]-minb)
    print(c)