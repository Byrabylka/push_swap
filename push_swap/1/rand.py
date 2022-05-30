import random as rand
a = list(range(100000))
rand.shuffle(a)
print("./push_swap ", end = ' ')
for i in a:
	print(i, end = ' ')