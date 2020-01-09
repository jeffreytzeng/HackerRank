process.stdin.on('data', (input) => {
	main(input);
	process.stdin.emit('end');
});

process.stdin.on("end", () => {
});

function Fabonacci(x) {
	if (x < 2) {
		return x > 0 ? 1 : 0;
	} else {
		return Fabonacci(x - 1) + Fabonacci(x - 2);
	}
}

function main(x) {
	console.log(Fabonacci(parseInt(x)));
}