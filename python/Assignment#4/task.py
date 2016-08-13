from sklearn.svm import SVC
import matplotlib.pyplot as plt

file = 'two_moons.txt'

f = open(file)

data = []

for line in f:
	split_line=line.split()
	new_line=[float(x) for x in split_line]
	data.append(new_line)
f.close()

x=[l[:-1] for l in data] 
y=[l[-1] for l in data]

clf1 = svm.SVC(kernel='rbf', gamma = 1.0)
clf2 = svm.SVC(kernel='rbf', gamma = 0.5)
clf3 = svm.SVC(kernel='rbf', gamma = 2.0)
clf4 = svm.SVC(kernel='poly', gamma = 1.0, degree=3)
clf5 = svm.SVC(kernel='poly', gamma = 0.5, degree=3)
clf6 = svm.SVC(kernel='poly', gamma = 2.0, degree=3)
clf7 = svm.SVC(kernel='poly', gamma = 1.0, degree=5)
clf8 = svm.SVC(kernel='poly', gamma = 0.5, degree=5)
clf9 = svm.SVC(kernel='poly', gamma = 2.0, degree=5)
clf10 = svm.SVC(kernel='poly', gamma = 1.0, degree=7)
clf11 = svm.SVC(kernel='poly', gamma = 0.5, degree=7)
clf12 = svm.SVC(kernel='poly', gamma = 2.0, degree=7)

clf1.fit(x,y)
clf2.fit(x,y)
clf3.fit(x,y)
clf4.fit(x,y)
clf5.fit(x,y)
clf6.fit(x,y)
clf7.fit(x,y)
clf8.fit(x,y)
clf9.fit(x,y)
clf10.fit(x,y)
clf11.fit(x,y)
clf12.fit(x,y)

# print(clf.support_) #indices of support vectors 
# print(clf.support_vectors_) #support vectors 
# print(clf.n_support_) #the number of support vector for each class
# print(clf.dual_coef_) #coefficients of the support vectors
# print(clf.coef_) #weights assigned to the feature (only available for linear kernel) 
# print(clf.intercept_) #constants in decision function
# print(clf.score(x,y))

print(clf1.n_support_)
print(clf2.n_support_)
print(clf3.n_support_)
print(clf4.n_support_)
print(clf5.n_support_)
print(clf6.n_support_)
print(clf7.n_support_)
print(clf8.n_support_)
print(clf9.n_support_)
print(clf10.n_support_)
print(clf11.n_support_)
print(clf12.n_support_)

h=0.02

x_min, x_max = x[:, 0].min() - 0.5, x[:, 0].max() + 0.5
y_min, y_max = x[:, 1].min() - 0.5, x[:, 1].max() + 0.5

xx,yy=np.meshgrid(np.arange(x_min,x_max,h),np.arange(y_min,y_max, h))
z=clf1.predict(np.c_[xx.ravel(),yy.ravel()]) 
z=z.reshape(xx.shape) 
plt.contourf(xx,yy,z,cmap=plt.cm.Paired,alpha=0.8) 
plt.scatter(x[:,0],x[:,1],s=100,c=y) 
plt.xlim(x_min,x_max)
plt.ylim(y_min,y_max)
plt.show()