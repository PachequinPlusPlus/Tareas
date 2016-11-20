import string
try:
	
	values = raw_input()
	icontador = 0

	for a in range (0,int(values)):
		add = raw_input()
		icontador+= int(add)

	print(icontador%128)

except EOFError:
    exit