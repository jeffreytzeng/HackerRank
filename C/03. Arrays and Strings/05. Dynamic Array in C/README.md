There are three types of requests come in the following forms:<br />

	1 x y --> Insert a book with y pages at the end of the x-th shelf.
	2 x y --> Print the number of pages in the y-th book on the x-th shelf.
	3 x   --> Print the number of books on the x-th shelf.

While type 2 and type 3 are handled with two arrays:

	int *total_number_of_books;		// The total number of books on each shelf.
	int **total_number_of_pages;	// The total number of pages in each book of each shelf. Shelves are rows and books are columns

Input Format:

	First line is the total_number_of_shelves in the library.
	Second line is total_number_of_queries, the number of requests.
	Following with total_number_of_queries lines each contains a request in one of the three specified formats.

Output Format:

	Write the logic for request of type 1.

Constraints:

	1 <= total_number_of_shelves <= 10^5
	1 <= total_number_of_queries <= 10^5
	For each query of the second type, it is guaranteed that a book is present on the x-th shelf at y-th index.
	0 <= x < total_number_of_shelves
	Both the shelves and the books are numbered starting from 0.
	Maximum number of books per shelf <= 1100.

ex:

	input:
		5
		5
		1 0 15
		1 0 20
		1 2 78
		2 2 0
		3 0

	output:
		78		// The number of pages in the 0-th book on the 2-nd shelf.
		2		// The number of books on the 0-th shelf.

Link: https://www.hackerrank.com/challenges/dynamic-array-in-c/problem<br />
Point: 40<br />
Level: medium