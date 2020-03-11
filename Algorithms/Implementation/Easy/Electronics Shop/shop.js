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
	var b = parseInt(input.split(os.EOL)[0].split(" ")[0]);
	var keyboard = input.split(os.EOL)[1].split(" ").map(x=>+x).sort(function (a, b) { return b - a;});
	// By default, the Array.prototype.sort() sorts elements alphabetically. Adding numeric handle function to sort numerically.
	var usb = input.split(os.EOL)[2].split(" ").map(x=>+x).sort(function (a, b) { return a - b;});

	Shopping(b, keyboard, usb);
});

function Shopping(b, keyboard, usb) {
	var max = -1;

	// Consider ryanfehr18's O(n+m) time solution check:
	// https://github.com/RyanFehr/HackerRank/blob/master/Algorithms/Implementation/Electronics%20Shop/Solution.java
	for (var i = 0, j = 0; i < keyboard.length; i++) {
		for (; j < usb.length; j++) {
			if (keyboard[i] + usb[j] > b) break;
			if (keyboard[i] + usb[j] > max) {
				max = keyboard[i] + usb[j];
			}
		}
	}
	console.log(max);
}