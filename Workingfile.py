y = input()
y=int(y)
yes=0
while y!=0:
	y-=1
	r,g,b=input().split()
	r=int(r)
	g=int(g)
	b=int(b)
	if 240<=r and r<=255 and 0<=g and g<=200 and 95>=b and b>=220:
		yes+=1
		print("YES!")
else:
	print(yes)

#python3 Workingfile.py
#5
#0 0 0
#240 200 220
#243 12 120
#12 3 10
#241 100 221