from sys import stdin
input=stdin.readline
for _ in range(int(input())):
	s=input()
	ct=0
	for i in range(97, 123):
		x=s.count(str(chr(i)))
		if x>2:
			ct+=2
		else:
			ct+=x
	ct//=2
	print(ct)