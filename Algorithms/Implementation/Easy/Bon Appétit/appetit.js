'use strict'

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = "";

process.stdin.on("data", data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit('end');
	}
});

process.stdin.on('end', _ => {
	input = input.split(os.EOL);
	var k = parseInt(input[0].split(' ')[1]);
	var bill = input[1].split(' ');
	var b = parseInt(input[2]);
	Pay(bill, k, b);
});

function Pay(bill, k, b) {
	bill.splice(k, 1);

	var sum = 0;

	for (var p of bill) {
		sum += parseInt(p);
	}

	console.log(b == sum / 2 ? "Bon Appetit" : b - sum / 2);
}
