y = input()
y=float(y)
while y != 0:
	inp = input()
	inp=float(inp)
	if inp>=80 and inp<=100:
		print("A")
	elif inp>=70 and inp<=79:
		print("B")
	elif inp>=60 and inp<=69:
		print("C")
	elif inp>=50 and inp<=59:
		print("D")
	elif inp>=0 and inp<=49:
		print("F")
	elif inp>100 or inp<0:
		print("X")
	y-=1
