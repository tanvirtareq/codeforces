for _ in range(int(input())):
	n=int(input())
	x=n//3
	y=n-2*x
	if abs(x-y)<=1:
		print(y, x)
	else:
		print(x, y-1)