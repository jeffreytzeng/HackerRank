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
	var kaprekar = new KaprekarNumbers(limits);
	kaprekar.ShowNumbers();
}

class KaprekarNumbers {
	constructor(limits) {
		this.limits = limits;
		this.kaprekar_numbers = new Array(0);
	}

	FindNumbers() {
		for (let i = this.limits[0]; i <= this.limits[1]; i++) {
			let d = i.toString().length;
			let square = Math.pow(i, 2).toString();
			let l = parseInt(square.length > d ? square.substr(0, square.length - d) : 0);
			let r = parseInt(square.substr(square.length - d));

			if ((l + r) == i) {
				this.kaprekar_numbers.push(i);
			}
		}
	}

	ShowNumbers() {
		this.FindNumbers();

		if (this.kaprekar_numbers.length > 0) {
			for (let k of this.kaprekar_numbers) {
				process.stdout.write(k + ' ');
			}
		} else {
			console.log("INVALID RANGE");
		}
	}
}
