from scipy.spatial import distance
import numpy as np
from sklearn.svm import SVC

file = 'iris.txt'

f = open(file)
data = []

for line in f:
	split_line=line.split()
	new_line=[float(x) for x in split_line[:-1]]
	new_line=[float(x) for x in split_line[:-2]]
	data.append(new_line)
f.close()
	
n1 = data[0] 
n51 = data[50]
n101 = data[100]
n150 = data[149]

dst = distance.euclidean(n1, n150)

#a = np.array(data)

x=[l[0] for l in data] 
y=[l[1] for l in data]
z=[l[2] for l in data]

clf = svm.SVC(kernel='linear')
clf.fit(x,y)

print(clf.predict(x))
# print x