'use strict'

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

process.stdin.on("data", data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit("end");
	}
});

process.stdin.on("end", _ => {
	var n = parseInt(input.split(os.EOL)[0]);
	var ar = input.split(os.EOL)[1].split(" ");

	Pairing(ar, n);
});

function Pairing(ar, n) {
	var pairs = 0;
	var colors = new Set();

	ar.forEach(c => {
		if (colors.has(c)) {
			pairs++;
			colors.delete(c);
		} else {
			colors.add(c);
		}
	});

	console.log(pairs);
}
		
		