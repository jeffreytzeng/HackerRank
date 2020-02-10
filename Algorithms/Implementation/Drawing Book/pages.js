'use strict'

process.stdin.setEncoding("utf-8");
var os = require('os');
var input = "";

process.stdin.on("data", data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		process.stdin.emit("end");
	}
});

process.stdin.on("end", _ => {
	var n = input.split(os.EOL)[0];
	var p = input.split(os.EOL)[1];

	Pages(n, p);
});

function Pages(n, p) {
	var turns = 0;

	if (p > n / 2) {
		turns = n % 2 ? Math.floor((n - p) / 2) : Math.floor(n / 2) - Math.floor(p / 2);
	} else {
		turns = Math.floor(p / 2);
	}

	console.log(turns);
}