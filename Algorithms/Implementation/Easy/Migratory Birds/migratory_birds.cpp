#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int migratoryBirds(vector<int> arr) {
	sort(arr.begin(), arr.end());

	int birds = 5;
	int repeat[birds];

	for (int bird = 0; bird < birds; bird++) {
		repeat[bird] = count(arr.begin(), arr.end(), bird+1);
	}

	int max = repeat[0];
	int most = 1;

	for (int bird = 1; bird < birds; bird++) {
		if (repeat[bird] > max) {
			max = repeat[bird];
			most = bird + 1;
		}
	}

	return most;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string arr_count_temp;
	getline(cin, arr_count_temp);

	int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(arr_count);

	for (int i = 0; i < arr_count; i++) {
		int arr_item = stoi(arr_temp[i]);
		arr[i] = arr_item;
	}

	int result = migratoryBirds(arr);

	fout << result << "\n";

	fout.close();
}

string ltrim(const string &str) {
	string s(str);

	s.erase(s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end());
	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}