triFile = open('pe018.txt', 'r')
triangle = []
for line in triFile:
	triangle.append([int(x) for x in line.split()])

x = len(triangle) - 2
while x >= 0:
	for y in range(0, len(triangle[x])):
		if triangle[x + 1][y + 1] > triangle[x + 1][y]:
			triangle[x][y] += triangle[x + 1][y + 1]
		else:
			triangle[x][y] += triangle[x + 1][y]
	x -= 1
print triangle[0][0]
