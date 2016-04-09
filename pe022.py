import string

l = []
f = open('pe022.txt', 'r')
l = string.split(string.replace(f.readline(), '",', ''), '"')
l[0] = ' '
l.remove('')
l.sort()

a = ' abcdefghijklmnopqrstuvwxyz'
summ = 0

for name in l:
	nameSum = 0
	for letter in name.lower():
		nameSum += a.index(letter)
	summ += nameSum * l.index(name)

print summ