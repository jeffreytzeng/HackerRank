'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = '';

process.stdin.on("data", data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		input = input.split(os.EOL);
		main();
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
});

function Valleys(arr) {
	var n = arr[0];
	var s = arr[1];
	var valleys = 0;
	var previous_level = 0;
	var current_level = 0;

	for (var step of s) {
		previous_level = current_level;
		current_level += step == "D" ? -1 : 1;

		if ((previous_level == 0) && (current_level == -1)) {
			valleys += 1;
		}
	}

	return valleys;
}

function main() {
	console.log(Valleys(input));
}