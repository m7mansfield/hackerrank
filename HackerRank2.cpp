// Michael Mansfield
// HackerRank Problem 2
// https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
	vector<int> result;
	int a_result = 0;
	int b_result = 0;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] < b[i]) b_result++;
		if (a[i] > b[i]) a_result++;
	}

	result.push_back(a_result);
	result.push_back(b_result);
	return result;
}

vector<string> split(const string& str) {
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

int main() {
	string a_temp_temp;
	getline(cin, a_temp_temp);

	vector<string> a_temp = split(a_temp_temp);

	vector<int> a(3);

	for (int i = 0; i < 3; i++) {
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	string b_temp_temp;
	getline(cin, b_temp_temp);

	vector<string> b_temp = split(b_temp_temp);

	vector<int> b(3);

	for (int i = 0; i < 3; i++) {
		int b_item = stoi(b_temp[i]);

		b[i] = b_item;
	}

	vector<int> result = compareTriplets(a, b);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << " ";
		}
	}

	cout << "\n";

	return 0;
}
