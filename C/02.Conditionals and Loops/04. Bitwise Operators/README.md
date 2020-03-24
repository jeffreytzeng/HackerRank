Given set S = {1, 2, 3, ..., n}, find:<br />
The maximum value of a & b which is less than a given integer k, where a and b(where a < b) are two integers from set S.<br />
The maximum value of a | b which is less than a given integer k, where a and b(where a < b) are two integers from set S.<br />
The maximum value of a xor b which is less than a given integer k, where a and b(where a < b) are two integers from set S.

Input Format:

	The only line contains 2 space-separated integers, n and k, respectively.

Output Format:

	The first line of output contains the maximum possible value of a & b.
	The second line of output contains the maximum possible value of a | b.
	The third line of output contains the maximum possible value of a xor b.

Constraints:

	2 <= n <= 10^3
	2 <= k <= n

ex:

	input:
		5 4

	output:
		2
		3
		3

Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem<br />
Points: 15<br />
Level: easy