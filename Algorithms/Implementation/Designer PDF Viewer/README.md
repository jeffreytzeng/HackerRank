When select a contiguous block of text in a PDF viewer, the selection is highlighted with a blue rectangle.
Using the letter heights given, determine the area of the rectangle heighlight in mm^2 assuming all letters are 1 mm wide.

Input Format:

	The first line contains 26 space-separated integers describing the respective heights of each consecutive lowercase English letter, ascii[a-z].
	The second line contains a single word, consisting of lowercase English alphabetic letters.

Output Format:

	Print a single integer denoting the area in mm^2 of highlighted rectangle when the given word is selected.

ex1:

	input:
		1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
		abc

	output:
		9

ex2:

	input:
		1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7
		zaba

	output:
		28

constraints:

	1 <= h[i] <= 7
	word.length <= 10

Link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem<br />
Point: 20<br />
Level: easy