Give a bill array and a remove index k and a value b for the half of sum of the rest. Print "Bon Appetit" if the half of sum is correct else print the value of the difference with correct one.<br />

Constraints:

	2 <= n <= 10^5
	0 <= k < n
	0 <= bill[i] <= 10^4
	0 <= b <= sum(bill[n])

Input Format:

	Three line of integers separated by space.
	First line is the number n of elements in bill[n] and remove index k.
	Second line is the bill array bill[0]...bill[n-1].
	Third line is the half of sum b.

Output Format:

	actual b - half sum b or "Bon Appetit"

ex1:

	input:
		4 1
		3 10 2 9
		12

	ouput:
		5

ex2:

	input:
		4 1
		3 10 2 9
		7

	output:
		Bon Appetit

Link: https://www.hackerrank.com/challenges/bon-appetit/problem<br />
Point: 10<br />
Level: easy
