def designerPdfViewer(h, word):
	highest = 0

	for w in word:
		if h[ord(w) - 97] > highest:
			highest = h[ord(w) - 97]

	return highest * len(word)


heights = list(map(int, input().split()))
word = input()
print(designerPdfViewer(heights, word))