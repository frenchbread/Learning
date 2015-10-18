from sklearn import tree

file = '/Users/damir/Documents/Study/Data Mining/iris.txt'

f = open(file)
data = []

for line in f:

    split_line=line.split()

    if split_line[-1]=='Iris-setosa':
        new_line=[float(x) for x in split_line[:-1]]+[0]
    elif split_line[-1]=='Iris-versicolor':
        new_line=[float(x) for x in split_line[:-1]]+[1]
    else:
        new_line=[float(x) for x in split_line[:-1]]+[2]

    data.append(new_line) #add new_line to data


x=[l[:-1] for l in data]
y=[l[-1] for l in data]
clf = tree.DecisionTreeClassifier()
clf.fit(x,y)

print(clf.predict(x))
print(clf.predict_proba(x))
print(clf.score(x,y))

with open('iris.dot', 'w') as f:
    f = tree.export_graphviz(clf, out_file=f)

#f.close()
