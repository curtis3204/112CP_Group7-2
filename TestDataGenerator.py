import numpy as np
import pandas as pd
import random


data = []

ArrayLength = 1000
# Sample Number Range
MinBoundary = -1000000000000
MaxBoundary = 10000000000000

DecimalBoundary = 10

for i in range(ArrayLength):
    # Randomly generate a float number between 0 and 100000000000
    # np.set_printoptions(suppress=True)
    
    # decimal = random.randint(0, DecimalBoundary)
    # temp = round(random.uniform(MinBoundary, MaxBoundary), decimal)
    temp = random.randint(MinBoundary, MaxBoundary)

    data.append(temp)

    # data.append(random.randint(0, 100))



for i in range(ArrayLength):
    print(data[i], end = " ")



# get maximum value and minimum value
max_value = max(data)
min_value = min(data)

print("\n")
print("max_value: ", max_value)
print("min_value: ", min_value)
    