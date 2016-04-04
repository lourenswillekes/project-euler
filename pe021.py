import math

def proper_divisors(num):
	l = []
	l.append(1)
	d = 2
	while d <= math.sqrt(num):
		if 0 == num % d:
			l.append(d)
			l.append(num / d)
		d += 1
	return l


l = []
for x in range(3, 10000):
	y = sum(proper_divisors(x))
	if sum(proper_divisors(y)) == x and x != y:
		print x, y
		l.append(x)
		l.append(y)
print sum(l) / 2
