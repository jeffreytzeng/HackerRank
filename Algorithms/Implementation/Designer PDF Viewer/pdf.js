'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

process.stdin.on("data", data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	main();
});

function main() {
	var heights = input.split(os.EOL)[0].split(" ").map(x=>+x);
	var word = input.split(os.EOL)[1];
	console.log(designerPdfViewer(heights, word));
}

function designerPdfViewer(h, word) {
	var highest = 0;

	for (var w of word) {
		if (h[w.charCodeAt(0) - 97] > highest) {
			highest = h[w.charCodeAt(0) - 97];
		}
	}

	return highest * word.length;
}