Given two arrays n and m of items' price and the budget b. Find the maximum affordable combination or print -l if cann't buy both items.<br />

Constraints:

	1 <= n, m <= 1000
	1 <= b, n[i], m[i] <= 10^6

Input Format:

	The first line contains three space-separated integers b, n, and m.
	The second line contains n space-separated integers, the price for each item n;
	The third line contains m space-separated integers, the price for each item m;

Output Format:

	Print a single integer denoting the amount of money will spend, or if cannot affordable for two items print -1 instead.

ex1:

	input:
		10 2 3
		3 1
		5 2 8

	output:
		9

ex2:

	input:
		5 1 1
		4
		5

	output:
		-1

Link: https://www.hackerrank.com/challenges/electronics-shop/problem<br />
Point: 15<br />
Level: easy
