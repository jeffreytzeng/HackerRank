def catAndMouse(*x):
	catA = abs(x[0] - x[2])
	catB = abs(x[1] - x[2])

	if catA == catB:
		return "Mouse C"
	else:
		return "Cat A" if catA < catB else "Cat B"


for i in range(int(input())):
	x, y, z = map(int, input().split())
	print(catAndMouse(x, y, z))