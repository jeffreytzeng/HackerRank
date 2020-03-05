#include <iostream>
#include <vector>

int designerPdfViewer(std::vector<int> h, std::string word) {
	int highest = 0;

	for (int i = 0; i < word.size(); i++) {
		if (h[word[i] - 97] > highest) {
			highest = h[word[i] - 97];
		}
	}

	return highest * word.size();
}

int main()
{
	std::vector<int> heights(26, 0);
	for (int i = 0; i < 26; i++) {
		std::cin >> heights[i];
	}

	std::string word = "";
	std::cin >> word;

	std::cout << designerPdfViewer(heights, word);
}
	