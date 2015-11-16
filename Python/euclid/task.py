file = 'iris.txt'

f = open(file)
data = []

for line in f:
	split_line=line.split()
	print split_line