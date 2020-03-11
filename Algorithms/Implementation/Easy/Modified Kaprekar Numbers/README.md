A modified Kaprekar number is a positive whole number with a special property. If you square it, then split the number into two integers and sum those integers, you have the same value you started with.
Consider a positive number n with d digits. Split n^2 into two parts l and r with right hand part, r must be d digits long, add these two parts and see if can get back number n.

Note: r may have leading zeros.

Input Format:

	The first line contains the lower integer limit p.
	The second line contains the upper integer limit q.

Output Format:

	Output each modified Kaprekar number in the given range, space-separated on a single line. If no modified Kaprekar number exist in the given range, print INVALID RANGE.

Constraints:

	0 < p < q < 100000

ex:

	input:
		1
		100

	output:
		1 9 45 55 99

Link: https://www.hackerrank.com/challenges/kaprekar-numbers/problem<br />
Point: 30<br />
Level: easy