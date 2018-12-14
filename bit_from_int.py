# python recurrent function returning integer in binary code
def bit_from_int(num):
	if num%2 == 1:
		f = '1'
	else:
		f = '0'
	num = num // 2
	if num >= 1:
		s = bit_from_int(num)
	else:
		s = ''

	return s + f

e = bit_from_int(2047)

print(e)
