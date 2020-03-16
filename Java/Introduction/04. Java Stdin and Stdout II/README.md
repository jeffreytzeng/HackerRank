Read an integer, a double, and a String from stdin, then print the values according to the instructions in the Output Format section below.<br />
Note: If use nextLine() method immediately following the nextInt() method, recall that nextInt() reads integer tokens; because of this, the last newline character for that line of integer input is still queued in the input buffer and the next nextLine() will be reading the remainder of the integer line(which is empty).

Input Format:

	The first line contains an integer.
	The second line contains a double.
	The third line contains a String.

Output Format:

	On the first line, print String: followed by the unaltered String read from stdin.
	Second line print Double: followed by the unaltered double read from stdin.
	Third line print Int: followed by the unaltered integer read from stdin.

ex:

	input:
		42
		3.1415
		Welcome to HackerRank's Java tutorials!

	output:
		String: Welcome to HackerRank's Java tutorials!
		Double: 3.1415
		Int: 42

Link: https://www.hackerrank.com/challenges/java-stdin-stdout/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen<br />
Point: 10<br />
Level: easy