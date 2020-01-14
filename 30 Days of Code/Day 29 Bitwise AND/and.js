'use strict'

process.stdin.setEncoding('utf-8');
var os = require('os');
var total_input = '';

process.stdin.on('data', function (data) {
	total_input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	GetMaxAnd(total_input);
});

function GetMaxAnd(data) {
	var q = +(data.split(os.EOL)[0]);

	for (var i = 0; i < q; i++) {
		const [n, k] = data.split(os.EOL)[i+1].split(' ').map(x => +(x));
		console.log((k | (k-1)) <= n ? k-1 : k-2);
	}
}
