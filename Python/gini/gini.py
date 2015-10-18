
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


def gini_coeff(x):
    # requires all values in x to be zero or positive numbers,
    # otherwise results are undefined
    n = len(x)
    s = x.sum()
    r = np.argsort(np.argsort(-x)) # calculates zero-based ranks
    return 1 - (2.0 * (r*x).sum() + s)/(n*s)

sample = np.asarray(sample)

gB = gini(sample)
gA1 = gini(sample21)
gA2 = gini(sample22)

print gB
print gB - gA1 * 8/15 - gA2 * 7/15
