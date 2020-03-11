#include <stdio.h>
#include <string.h>

int designerPdfViewer(int h_count, int *h, char *word) {
	int highest = 0;
	for (int i = 0; i < strlen(word); i++) {
		if (h[word[i] - 97] > highest) {
			highest = h[word[i] - 97];
		}
	}

	return highest * strlen(word);
}

int main()
{
	int heights[26] = {0};
	for (int i = 0; i < 26; i++) {
		scanf("%d", &heights[i]);
	}

	char word[11] = {0};
	scanf("%s", word);
	printf("%d\n", designerPdfViewer(26, heights, word));
	return 0;
}