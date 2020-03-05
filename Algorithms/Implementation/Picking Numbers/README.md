Given an array a of integers, find and print the maximum length of subarray you can select such that the absolute difference between any two of the chosen integers is less than or equal to 1.

Input Format:

	First line contains a single integer n, the size of the array a.
	Second line contains n space-separated integers a[i].

Output Format:

	A signle integer denoting the maximum number of integers you can choose from the array such that the absolute difference between any two of the chosen integers is <= 1.

Constraints:

	2 <= n <= 100
	0 < a[i] < 100
	The answer will be >= 2

ex1:

	input:
		6
		4 6 5 3 3 1

	output:
		3

ex2:

	input:
		6
		1 2 2 3 1 2

	output:
		5

Link: https://www.hackerrank.com/challenges/picking-numbers/problem<br />
Point: 20<br />
Level: easy