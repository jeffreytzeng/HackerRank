'use strict';

process.stdin.setEncoding("utf-8");
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
	var q = parseInt(input.split(os.EOL)[0]);
	var lines = input.split(os.EOL).map(str => str.split(' ').map(x=>+x));

	for (var i = 1; i <= q; i++) {
		console.log(catAndMouse(lines[i][0], lines[i][1], lines[i][2]));
	}
}

function catAndMouse(x, y, z) {
	var catA = Math.abs(x - z);
	var catB = Math.abs(y - z);

	if (catA == catB) {
		return "Mouse C";
	} else {
		return (catA < catB ? "Cat A" : "Cat B");
	}
}