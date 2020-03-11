'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

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
	var t = parseInt(input.split(os.EOL)[0]);
	for (var i = 0; i < t; i++) {
		console.log(utopianTree(parseInt(input.split(os.EOL)[i + 1])));
	}
}

// Inspired by asbear's O(1) algo
/*    year       n-cycle          height
 *  (2^0 - 1)       0       2*0+1 = 1
 *  (2^1 - 1)       1       2*1   = 2
 *  (2^1 - 1)       2       2*1+1 = 3
 *  (2^2 - 1)       3       2*3   = 6
 *  (2^2 - 1)       4       2*3+1 = 7
 *  (2^3 - 1)       5       2*7   = 14
 *  (2^3 - 1)       6       2*7+1 = 15
 */
function utopianTree(n) {
	return 2*((1 << (Math.floor(n/2) + n%2)) - 1) - (n%2 - 1);
}