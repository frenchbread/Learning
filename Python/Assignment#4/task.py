from scipy.spatial import distance
import numpy as np
from sklearn.svm import SVC

file = 'wdbc_mean.txt'

f = open(file)

data = []

for line in f:
	split_line=line.split()
	new_line=[float(x) for x in split_line]
	data.append(new_line)
f.close()

print data

# print x