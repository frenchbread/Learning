
sample = [1,1,1,1,1,2,2,2,3,3,3,3,3,4,4]

sample1 = [1,1,1,1,1,2,2,2,3,3,3,3,3,4,4]
sample2 = [1,1,1,1,2,2,2,3]
sample25 = [1,3,3,3,3,4,4]

def gini(list):
  sorted_list = sorted(list)
  height, area = 0, 0
  for value in sorted_list:
    height += value
    area += height - value / 2.
  fair_area = height * len(list) / 2
  return (fair_area - area) / fair_area

# print gini(sample
print 1 - gini(sample2) * gini(sample2) - gini(sample25) * gini(sample25)
