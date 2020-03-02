Two cats A and B are at various positions on a line. Your task is to determine which cat will reach the mouse C first. If the cats are at equal distance to the mouse, the mouse will be allowed to escape while the cats fight.

Input Format:

	The first line is a single integer q for the number of queries.
	The next q lines contain three space-separated integers denoting respective values of x, y, and z for the positions of cats A and B and the mouse C.

Output Format:

	Print Cat A or Cat B if any of the two cats is closer to the mouse. Or print Mouse C if the two cats are equal to the mouse.

Constraints:

	1 <= q <= 100
	1 <= x, y, z <= 100

ex:

	input:
		2
		1 2 3
		1 3 12

	output:
		Cat B
		Mouse C

Link: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem<br />
Point: 15<br />
Level: easy