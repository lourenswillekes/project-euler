# pe017.py

import re

ones  = ['', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine',]
tens  = ['', 'teen', 'twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety',]
teens = ['ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen',]
huns  = ['', 'onehundredand', 'twohundredand', 'threehundredand', 'fourhundredand', 'fivehundredand', 'sixhundredand', 'sevenhundredand', 'eighthundredand', 'ninehundredand',]

v = 0
for x in range(0,10):
	for y in range(0,10):
		for z in range(0,10):
			
			out = huns[x] + tens[y] + ones[z]
			if 1 == y:
				out = huns[x] + teens[z]
			if 'and' in out[-3:]:
				out = out[:-3]

			print out
			v += len(out)

print 'onethousand'
print v + 11