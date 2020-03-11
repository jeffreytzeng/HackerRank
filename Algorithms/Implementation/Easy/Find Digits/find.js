'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

process.stdin.on('data', data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	main();
});

function main() {
	var t = input.split(os.EOL)[0];

	for (var i = 0; i < t; i++) {
		let n = input.split(os.EOL)[i + 1];
		console.log(findDigits(n));
	}
}

function findDigits(n) {
	var count = 0;
	var origin = n;

	while (n != 0) {
		var divisor = n % 10;

		if (divisor != 0) {
			count += origin % divisor ? 0 : 1;
		}
		n = Math.floor(n / 10);
	}

	return count;
}