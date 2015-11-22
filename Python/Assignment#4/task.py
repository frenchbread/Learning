from sklearn import svm

file = 'wdbc_mean.txt'

f = open(file)

data = []

for line in f:
	split_line=line.split()
	new_line=[float(x) for x in split_line]
	data.append(new_line)
f.close()

x=[l[:-1] for l in data] 
y=[l[-1] for l in data]

clf = svm.SVC(C=2, kernel='linear')
clf.fit(x,y)

# print(clf.support_) #indices of support vectors 
# print(clf.support_vectors_) #support vectors 
# print(clf.n_support_) #the number of support vector for each class
# print(clf.dual_coef_) #coefficients of the support vectors
print(clf.coef_) #weights assigned to the feature (only available for linear kernel) 
# print(clf.intercept_) #constants in decision function
# print(clf.score(x,y))