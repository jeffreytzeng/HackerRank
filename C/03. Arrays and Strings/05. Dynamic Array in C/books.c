#include <stdio.h>

int *total_number_of_books;
int **total_number_of_pages;

int main()
{
	int total_number_of_shelves = 0;
	scanf("%d", &total_number_of_shelves);
	// Initializing books in every shelf with zero.
	total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
	// For every shelf initializes it with a zero page book.
	total_number_of_pages = (int**)calloc(total_number_of_shelves, sizeof(int*));
	for (int i = 0; i < total_number_of_shelves; i++) {
		*(total_number_of_pages + i) = (int*)calloc(1, sizeof(int));
	}

	int total_number_of_queries = 0;
	scanf("%d", &total_number_of_queries);

	while (total_number_of_queries--) {
		int type_of_query = 0;
		scanf("%d", &type_of_query);

		if (type_of_query == 1) {
			int x = 0, y = 0;
			scanf("%d %d", &x, &y);

			// Increasing a book at specified shelf.
			++*(total_number_of_books + x);
			// Increasing a book space for the new inserting book.
			*(total_number_of_pages + x) = realloc(*(total_number_of_pages + x), *(total_number_of_books + x) * sizeof(int));
			// Specifying the new book pages.
			*(*(total_number_of_pages + x) + *(total_number_of_books + x) - 1) = y;
		} else if (type_of_query == 2) {
			int x = 0, y = 0;
			scanf("%d %d", &x, &y);
			printf("%d\n", *(*(total_number_of_pages + x) + y));
		} else {
			int x;
			scanf("%d", &x);
			printf("%d\n", *(total_number_of_books + x));
		}
	}

	if (total_number_of_books) {
		free(total_number_of_books);
	}

	for (int i = 0; i < total_number_of_shelves; i++) {
		if (*(total_number_of_pages + i)) {
			free(*(total_number_of_pages + i));
		}
	}

	if (total_number_of_pages) {
		free(total_number_of_pages);
	}

	return 0;
}