'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = '';

process.stdin.on('data', data => {
	input += data;

	if(data.split(os.EOL)[0] == '') {
		process.stdin.emit('end');
	}
});

process.stdin.on("end", _ => {
	main();
});

function main() {
	var n = parseInt(input.split(os.EOL)[0]);
	var arr = input.split(os.EOL)[1].split(' ').map(x => +x);

	let result = cutTheSticks(arr);

	for (var s of result) {
		console.log(s);
	}
}

function cutTheSticks(arr) {
	arr.sort((a, b) => { return a - b;});
	var result = Array(1).fill(arr.length);

	for (var i = 0; i < arr.length-1; i++) {
		if (arr[i] != arr[i+1]) {
			result.push(arr.length - (i + 1));
		}
	}

	return result;
}
			