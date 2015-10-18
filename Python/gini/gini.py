
list = [1,1,1,1,1,2,2,2,3,3,3,3,3,4,4];

def gini(list_of_values):
  sorted_list = sorted(list_of_values)
  height, area = 0, 0
  for value in sorted_list:
    height += value
    area += height - value / 2.
  fair_area = height * len(list_of_values) / 2
  return (fair_area - area) / fair_area

print gini(list)
