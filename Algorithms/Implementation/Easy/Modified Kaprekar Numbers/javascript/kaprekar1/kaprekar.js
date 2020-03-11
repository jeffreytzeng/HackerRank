'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

process.stdin.on("data", data => {
	input += data;

	if(data.split(os.EOL)[0] == "") {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	main();
});

function main() {
	var limits = input.split(os.EOL).map(x=>+x);
	var kaprekar_numbers = kaprekar(limits);

	if (kaprekar_numbers.length > 0) {
		for (var k of kaprekar_numbers) {
			process.stdout.write(k + ' ');
		}
	} else {
		console.log("INVALID RANGE");
	}
}

function kaprekar(limits) {
	var kaprekar_numbers = [];

	for (var i = limits[0]; i <= limits[1]; i++) {
		let d = i.toString().length;
		let square = Math.pow(i, 2).toString();
		let l = parseInt(square.length > d ? square.substr(0, square.length - d) : 0);
		let r = parseInt(square.substr(square.length - d));

		if ((l + r) == i) {
			kaprekar_numbers.push(i);
		}
	}

	return kaprekar_numbers;
}