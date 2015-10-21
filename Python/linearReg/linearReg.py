from sklearn import tree

# if testing - change the path for the file
file = 'elemapi2.txt'

f = open(file)
data = []

for line in f:

    split_line=line.split()

    # if split_line[-1]=='no:
    #     new_line=[float(x) for x in split_line[:-1]]+[0]
    # elif split_line[-1]=='yes':
    #     new_line=[float(x) for x in split_line[:-1]]+[1]
    # else:
    #     new_line=[float(x) for x in split_line[:-1]]+[2]

    del split_line[7]
    del split_line[-4]
    del split_line[-3]
    del split_line[-2]

    #new_line=[float(x) for x in split_line]

    print int(split_line[0])+int(split_line[1])

    #data.append(new_line)

    #print new_line
