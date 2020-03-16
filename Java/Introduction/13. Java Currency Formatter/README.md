Given a double-precision number, payment, denoting an amount of money, use the NumberFormat class' getCurrencyInstance method to convert payment into the US, Indian, Chinese, and French currency formats. Then print the formatted values as follows:

	US: formattedPayment
	India: formattedPayment
	China: formattedPayment
	France: formattedPayment

where formattedPayment is payment formatted according to the appropriate Locale's currency.

Note: India does not have a built-in Locale, so you must construct on where the language is en(i.e., English).

Input Format:

	A single double-precision number denoting payment.

Output Format:

	On the first line, print US: u where us is payment formatted for US currency.
	On the second line, print India: i where i is payment formatted for Indian currency.
	On the third line, print China: c where c is payment formatted for Chinese currency.
	On the fourth line, print France: f, where f is payment formatted for French currency.

Constraints:

	0 <= payment <= 10^9

ex:

	input:
		12324.134

	output:
		US: $12,324.13
		India: Rs.12,324.13
		China: ￥12,324.13
		France: 12 324,13 €

Link: https://www.hackerrank.com/challenges/java-currency-formatter/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen<br />
Point: 15<br />
Level: easy