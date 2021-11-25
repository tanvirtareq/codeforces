from sys import stdin
input=stdin.readline
for _ in range(int(input())):
	n=int(input())
	ss=[]
	ss.clear()
	for i in range(n):
		ss.append(str(input()).strip())
	# print(ss)
	ans=0
	for i in range(97, 123):
		x=str(chr(i))
		pts=[]
		pts.clear()
		for j in range(n):
			# print(ss[j])
			pts.append(len(ss[j])-2*ss[j].count(x))
			# print(len(ss[j]))
		pts.sort()
		# print(pts)
		y=0
		for j in range(n):
			y+=pts[j]
			ans=max(ans, j)
			if y>=0:
				break
		# print(y)
		if(y<0):
			ans=max(ans, n)
	print(ans)
