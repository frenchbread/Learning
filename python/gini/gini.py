
sample = [1,1,1,1,1,2,2,2,3,3,3,3,3,4,4]
sample21 = [1,1,1,1,2,2,2,3]
sample22 = [1,3,3,3,3,4,4]

import numpy as np

def gini(list):
  sorted_list = sorted(list)
  height, area = 0, 0
  for value in sorted_list:
    height += value
    area += height - value / 2.
  fair_area = height * len(list) / 2
  return (fair_area - area) / fair_area

giniBefore = gini(sample)
giniAfter1 = gini(sample21)
giniAfter2 = gini(sample22)

totalCount = len(sample)
sample21Len = len(sample21)
sample22Len = len(sample22)

giniIndex = giniBefore - giniAfter1  * sample21Len/totalCount - giniAfter2 * sample22Len/totalCount

print "Gini Index: " + str(giniBefore)
print "Information gain: " + str(giniIndex)
