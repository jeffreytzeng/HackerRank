Given three integers X, Y, and Z representing the dimensions of a cuboid along with an integer N. You have to print a list of all possible coordinates given by (i, j, k) on a 3D grid where the sum of i + j + k is not equal to N. Here, 0 <= i <= X; 0 <= j <= Y; 0 <= k <= Z.

Input Format:

	Four integers X, Y, Z, and N each on four separate lines, respectively.

Constraints:

	Print the list in lexicographic increasing order.

ex1:

	input:
		1
		1
		1
		2

	output:
		[[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]

ex2:

	input:
		2
		2
		2
		2

	output:
		[[0, 0, 0], [0, 0, 1], [0, 1, 0], [0, 1, 2], [0, 2, 1], [0, 2, 2], [1, 0, 0], [1, 0, 2], [1, 1, 1], [1, 1, 2], [1, 2, 0], [1, 2, 1], [1, 2, 2], [2, 0, 1], [2, 0, 2], [2, 1, 0], [2, 1, 1], [2, 1, 2], [2, 2, 0], [2, 2, 1], [2, 2, 2]]

Link: https://www.hackerrank.com/challenges/list-comprehensions/problem<br />
Point: 10<br />
Level: easy