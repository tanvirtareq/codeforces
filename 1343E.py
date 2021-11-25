from sys import stdin
from queue import Queue
from itertools import accumulate
from collections import deque

def bfs(r, pr, tp):
    global g, d
    q=deque([r])
    d[tp][r]=d[tp][pr]+1
    while  len(q) > 0:
        pr=q.popleft()
        for r in g[pr]:
            if d[tp][r]!=-1:
                continue
            d[tp][r]=d[tp][pr]+1
            q.append(r)


for _ in range(int(input())):
    n, m, a, b, c = [int(x) for x in stdin.readline().split()]
    p=list(accumulate(sorted([int(x) for x in stdin.readline().split()])))
    g=[[] for i in range(n+1)]
    for i in range(m):
        u, v=[int(x) for x in stdin.readline().split()]
        g[u].append(v)
        g[v].append(u)
    d=[ [-1 for x in range(n+1)]   for i in range(3)]
    bfs(a, a, 0)
    bfs(b, b, 1)
    bfs(c, c, 2)
    p.append(0)
    print(min([p[d[0][x]+d[1][x]+d[2][x]-1]+p[d[1][x]-1] for x in range(1, n+1) if d[0][x]+d[1][x]+d[2][x]-1<m] ))
