Given a sequence of up and down steps represent Gary's hike. Counting how many valleys he passed through.<br />
Note:

	A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
	A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

Input Format:

	The first line contains an integer n, the number of steps in Gary's hike.
	The second line contains a single string s, of n characters that describe his path.

Output Format:

	A single integer that denotes the number of valleys Gary walked through during his hike.

Constraints

	2 <= n <= 10^6
	s[i] is either "U" or "D"



ex1:

    input:                      which is:
        8                                           /\
        DDUUUUDD                              _    /  \_
                                               \  /
    output:                                     \/
        1

ex:

    input:                      which is:
        8                                     _/\      _
        UDDDUDUU                                 \    /
                                                  \/\/
    output:
        1
