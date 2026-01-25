## Logical Operators in Python – Quick Reference

- Use `and`, `or`, `not`    → for **single boolean values** / scalar objects  
  (normal Python boolean logic)

- Use `&`, `|`, `~`         → for **NumPy arrays**, pandas Series, or **element-wise** boolean operations  
  (vectorized / array broadcasting – very common in data science & ML)

Examples:

Single values (scalars):
python
a = True
b = False
print(a and b)      # False
print(a or b)       # True
print(not a)        # False

#Numpy Arrays

import numpy as np

x = np.array([True, False, True, False])
y = np.array([True, True, False, False])

print(x & y)        # [ True False False False ]
print(x | y)        # [ True  True  True False ]
print(~x)           # [False  True False  True ]
