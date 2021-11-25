from sys import stdin
input=stdin.readline
for _ in range(int(input())):
	n, k=list(map(int, input().split()))
	a=list(map(int, input().split()))
	b=[[]]
	b.clear()
	for i in range(len(a)):
		b.append([a[i], i])
	b.sort()
	c=[-1 for i in range(len(a))]
	mp={};
	baki=n
	for i in range(n):
		if b[i][0] in mp.keys():
			mp[b[i][0]]+=1
		else:
			mp[b[i][0]]=1
		if(mp[b[i][0]]>k):
			c[b[i][1]]=0
			baki-=1
	koyta=baki//k
	ct=1
	for i in range(n):
		if c[b[i][1]]!=-1:
			continue
		c[b[i][1]]=ct
		ct+=1
		if(ct>k):
			ct=1
			koyta-=1
		if koyta<=0:
			break
	for i in c:
		if i==-1:
			print(0)
		else:
			print(i)