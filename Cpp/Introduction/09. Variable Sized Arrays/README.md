Consider an n-element array, a, where each index i in the array contains a reference to an array of ki integers(where the value of ki varies from array to array). Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.

Input Format:

	The first line contains two space-separated integers denoting the respective values of n(the number of variable-length arrays) and q(the number of queries).
	In the next n lines each contains space-separated total elements k with following k-elements a[i0] a[i1] ... a[i(k-1)] format.
	After that following q lines with each has two space-separated integers describing the respective values of i(an index in array a) and j(an index in the array referenced by a[i]) for a query.

Output Format:

	For each pair of i and j values(i.e., for each query), print a single integer denoting the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.

Constraints:

	1 <= n, q <= 10^5
	1 <= k <= 3*10^5
	n <= k.sum <= 3*10^5
	0 <= i < n
	0 <= j < k

ex:

	input:
		2 2
		3 1 5 4
		5 1 2 8 9 3
		0 1
		1 3

	output:
		5
		9

Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem<br /r>
Point: 30<br />
Level: easy