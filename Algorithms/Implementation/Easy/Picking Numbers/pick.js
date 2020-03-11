'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = '';

process.stdin.on('data', data => {
	input += data;

	if (data.split(os.EOL)[0] == '') {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	main();
});

function main() {
	var n = parseInt(input.split(os.EOL)[0]);
	var a = input.split(os.EOL)[1].split(' ').map(x=>+x);
	
	console.log(pickingNumbers(a));
}

function pickingNumbers(a) {
	a.sort((x, y) => { return x - y;});

	var max = 0;
	var start = 0;
	var check = a[0];

	for (var i in a) {
		if (Math.abs(check - a[i]) > 1) {
			check = a[i];
			if (i - start > max) {
				max = i - start;
			}
			start = i;
		} else if (i == a.length - 1) {
			if (i - start + 1 > max) {
				max = i - start + 1;
			}
		}
	}
	return max;
}