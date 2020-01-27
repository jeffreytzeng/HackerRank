'use.strict';

process.stdin.setEncoding('utf8');
var os = require('os');
var input = "";

process.stdin.on("data", (data) => {
	input = data.split(os.EOL)[0];
	ProgrammerDay(input);
	process.stdin.emit('end');
});

process.stdin.on('end', _ => {
});

function ProgrammerDay(year) {
	var days_in_feb = 28;

	if (year == 1918) {
		days_in_feb = 15;
	} else {
		var leap_year = false;

		if (year < 1918) {
			leap_year = (year % 4 == 0);
		} else {
			leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
		}

		if (leap_year) {
			days_in_feb = 29;
		}
	}

	FindDate(days_in_feb, year);
}

function FindDate(feb_days, year) {
	var month_days = [31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
	var total_days = 0;

	for (var i = 0; i < 12; i++) {
		total_days += month_days[i];

		if (total_days > 256) {
			total_days -= month_days[i];
			console.log(String(256 - total_days).padStart(2, '0') + "." + String(i+1).padStart(2, '0') + "." + year);
			break;
		}
	}
}